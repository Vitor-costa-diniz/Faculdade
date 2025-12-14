import pandas as pd
import numpy as np
from sklearn.datasets import fetch_california_housing
from sklearn.model_selection import train_test_split
from xgboost import XGBRegressor
from sklearn.metrics import mean_squared_error, mean_absolute_error

# 1. Carregando os dados
print("Carregando dataset California Housing...")
california_housing = fetch_california_housing(as_frame=True)
X = california_housing.data
y = california_housing.target


# 2. Preparando os dados
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

print(f"Dados de treino: {X_train.shape[0]} amostras")
print(f"Dados de teste: {X_test.shape[0]} amostras")

# 3. Configurando e treinando o XGBRegressor
xgb_model = XGBRegressor(
    objective='reg:squarederror',
    n_estimators=100,
    learning_rate=0.1,
    random_state=42,
    n_jobs=-1
)

xgb_model.fit(X_train, y_train)

# 4. Fazer previsões no conjunto de teste
y_pred = xgb_model.predict(X_test)

# 5. Calcular métricas de avaliação
mse = mean_squared_error(y_test, y_pred)
rmse = np.sqrt(mse)
mae = mean_absolute_error(y_test, y_pred)

# 6. Conversão para Dólares Reais
CONVERSAO_DOLAR = 100000

rmse_dolar = rmse * CONVERSAO_DOLAR
mae_dolar = mae * CONVERSAO_DOLAR

print("\n--- Resultados da Avaliação do Modelo ---")
print(f"RMSE (Escala do Modelo): {rmse:.4f}")
print(f"MAE (Escala do Modelo):  {mae:.4f}")
print("-" * 45)
print(f"Erro Médio (RMSE) da Previsão em Dólares:       **${rmse_dolar:,.2f}**")
print(f"Erro Médio Absoluto (MAE) da Previsão em Dólares: **${mae_dolar:,.2f}**")
