import pandas as pd
import xgboost as xgb
from sklearn.datasets import load_breast_cancer
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
from sklearn.metrics import accuracy_score
import time

# 1. Carregar dados
print("Carregando dataset Breast Cancer...")
data = load_breast_cancer()
X, y = data.data, data.target

# 2. Dividir dados
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Configuração do Duelo
MAX_DEPTH = 3

# --- COMPETIDOR 1: Árvore de Decisão Simples ---
start_dt = time.time()
dt_model = DecisionTreeClassifier(
    max_depth=MAX_DEPTH, 
    random_state=42
)
dt_model.fit(X_train, y_train)
end_dt = time.time()

# Previsão e Acurácia
y_pred_dt = dt_model.predict(X_test)
acc_dt = accuracy_score(y_test, y_pred_dt)


# --- COMPETIDOR 2: XGBoost ---
start_xgb = time.time()
xgb_model = xgb.XGBClassifier(
    max_depth=MAX_DEPTH,
    n_estimators=100,
    learning_rate=0.1,
    use_label_encoder=False,
    eval_metric='logloss',
    random_state=42
)
xgb_model.fit(X_train, y_train)
end_xgb = time.time()

# Previsão e Acurácia
y_pred_xgb = xgb_model.predict(X_test)
acc_xgb = accuracy_score(y_test, y_pred_xgb)


# --- PLACAR FINAL ---
print("\n" + "="*40)
print(f"{'METRICA':<20} | {'DT (Árvore)':<10} | {'XGBoost':<10}")
print("-" * 45)
print(f"{'Acurácia':<20} | {acc_dt:.2%}     | {acc_xgb:.2%}")
print(f"{'Tempo de Treino':<20} | {(end_dt - start_dt):.4f}s    | {(end_xgb - start_xgb):.4f}s")
print("="*40)


diff = acc_xgb - acc_dt
if diff > 0:
    print(f"\nCONCLUSÃO: O XGBoost venceu por uma margem de {diff:.2%}.")
    print("Mesmo com árvores rasas (depth=3), o conjunto (ensemble) supera a árvore única.")
elif diff < 0:
    print(f"\nCONCLUSÃO: A Árvore de Decisão venceu! (Raro em dados complexos).")
else:
    print("\nCONCLUSÃO: Empate Técnico.")