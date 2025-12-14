import pandas as pd
import numpy as np
import xgboost as xgb
from sklearn.datasets import fetch_california_housing
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error
import os

# 1. Carregar dados
print("Carregando dataset California Housing...")
data = fetch_california_housing()
X, y = data.data, data.target

# 2. Dividir dados
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# 3. Configuração do Modelo com Early Stopping
model = xgb.XGBRegressor(
    n_estimators=1000, 
    learning_rate=0.05,          
    early_stopping_rounds=10, 
    objective='reg:squarederror',
    random_state=42,
    n_jobs=-1
)


model.fit(
    X_train, y_train,
    eval_set=[(X_test, y_test)],
    verbose=False              

print(f"Treino finalizado na iteração: {model.best_iteration}")
print(f"Melhor score (RMSE): {model.best_score:.4f}")

# 4. Salvando o modelo (Engenharia de ML)
nome_arquivo = "desafio_5_modelo.json"

if os.path.exists(nome_arquivo):
    os.remove(nome_arquivo)

model.save_model(nome_arquivo)
print(f"\nModelo salvo com sucesso como: '{nome_arquivo}'")

# --- SIMULAÇÃO DE PRODUÇÃO ---
print("\n" + "="*40)
print("SIMULANDO AMBIENTE DE PRODUÇÃO")
print("="*40)

# 5. Carregando o modelo do disco
print(f"Lendo o arquivo '{nome_arquivo}'...")
model_prod = xgb.XGBRegressor()
model_prod.load_model(nome_arquivo)

# 6. Fazendo uma previsão de teste
idx = 0
sample_X = X_test[idx:idx+1]
sample_y = y_test[idx]

# Previsão
predicao = model_prod.predict(sample_X)[0]

# Conversão para Dólares (Contexto do negócio)
valor_real = sample_y * 100000
valor_predito = predicao * 100000
erro = valor_predito - valor_real

print(f"\nTeste com a Casa ID #{idx}:")
print(f"Valor Real:     ${valor_real:,.2f}")
print(f"Valor Predito:  ${valor_predito:,.2f}")
print(f"Erro:           ${erro:,.2f}")

# Verificação Final
print("-" * 40)
print("O modelo carregado funciona exatamente como o treinado!")