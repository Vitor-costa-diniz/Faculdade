import pandas as pd
import numpy as np
import xgboost as xgb
from sklearn.datasets import make_classification
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix, classification_report, recall_score

# 1. Gerando Dados Sintéticos Desbalanceados
X, y = make_classification(n_samples=10000, n_classes=2, weights=[0.99, 0.01], 
                           flip_y=0, random_state=42)

# 2. Divisão Treino/Teste Estratificada
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, 
                                                    random_state=42, stratify=y)

print(f"Total de amostras de teste: {len(y_test)}")
print(f"Fraudes reais no teste: {sum(y_test)}")
print("-" * 50)

# --- MODELO 1: Sem Ajustes (Baseline) ---
print("\n1. Treinando XGBoost Padrão (Sem pesos)...")
model_padrao = xgb.XGBClassifier(random_state=42, eval_metric='logloss')
model_padrao.fit(X_train, y_train)
y_pred_padrao = model_padrao.predict(X_test)

recall_padrao = recall_score(y_test, y_pred_padrao)
cm_padrao = confusion_matrix(y_test, y_pred_padrao)

# --- MODELO 2: Com Balanceamento (scale_pos_weight) ---
print("2. Treinando XGBoost Ajustado (scale_pos_weight)...")

count_neg = len(y_train) - sum(y_train)
count_pos = sum(y_train)
peso_correcao = count_neg / count_pos

print(f"   -> Peso calculado para a classe minoritária: {peso_correcao:.2f}")

model_ajustado = xgb.XGBClassifier(scale_pos_weight=peso_correcao, 
                                   random_state=42, eval_metric='logloss')
model_ajustado.fit(X_train, y_train)
y_pred_ajustado = model_ajustado.predict(X_test)

recall_ajustado = recall_score(y_test, y_pred_ajustado)
cm_ajustado = confusion_matrix(y_test, y_pred_ajustado)

# --- COMPARAÇÃO FINAL ---
print("\n" + "="*50)
print("RELATÓRIO DE COMPARAÇÃO: DETECÇÃO DE FRAUDE")
print("="*50)

print(f"\n[MODELO PADRÃO]")
print(f"Recall (Fraudes Detectadas): {recall_padrao:.2%}")
print(f"Matriz de Confusão:\n{cm_padrao}")
print(f"Interpretação: Detectou {cm_padrao[1,1]} fraudes e deixou passar {cm_padrao[1,0]}.")

print(f"\n[MODELO AJUSTADO]")
print(f"Recall (Fraudes Detectadas): {recall_ajustado:.2%}")
print(f"Matriz de Confusão:\n{cm_ajustado}")
print(f"Interpretação: Detectou {cm_ajustado[1,1]} fraudes e deixou passar {cm_ajustado[1,0]}.")

ganho = recall_ajustado - recall_padrao
print("-" * 50)
if ganho > 0:
    print(f"CONCLUSÃO: O ajuste aumentou a detecção de fraudes em +{ganho:.1%}.")
else:
    print("CONCLUSÃO: O ajuste não alterou o resultado.")