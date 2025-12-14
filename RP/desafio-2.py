import pandas as pd
import numpy as np
import xgboost as xgb
from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix, classification_report
import matplotlib.pyplot as plt
import seaborn as sns

# 1. Carregando os dados
print("Carregando dataset Wine...")
wine = load_wine()
X = wine.data
y = wine.target
target_names = wine.target_names

# 2. Preparando os dados
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# 3. Configurando e treinando XGBClassifier
print("Treinando modelo...")
xgb_model = xgb.XGBClassifier(
    objective='multi:softmax',
    num_class=3, 
    n_estimators=100,
    learning_rate=0.1,
    random_state=42,
    eval_metric='mlogloss'
)

xgb_model.fit(X_train, y_train)

# 4. Previsões
y_pred = xgb_model.predict(X_test)

# 5. Gerar Matriz de Confusão
cm = confusion_matrix(y_test, y_pred)

# Relatório numérico rápido
print("\n--- Relatório de Classificação ---")
print(classification_report(y_test, y_pred, target_names=target_names))

# 6. Visualização Gráfica (O seu pedido)
print("Gerando gráfico de Heatmap...")

plt.figure(figsize=(8, 6))
sns.heatmap(
    cm,
    annot=True,                 
    fmt='d',                    
    cmap='Blues',              
    xticklabels=target_names,   
    yticklabels=target_names 
)

plt.xlabel('Classe Predita')
plt.ylabel('Classe Verdadeira (Real)')
plt.title('Matriz de Confusão - Classificação de Vinhos (XGBoost)')
plt.show()