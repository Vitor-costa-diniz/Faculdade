# Desafios Práticos de Machine Learning com XGBoost

Este repositório documenta 5 desafios práticos de Machine Learning utilizando a poderosa biblioteca XGBoost e o ecossistema Scikit-learn, cobrindo técnicas essenciais em regressão, classificação, tratamento de dados desbalanceados e engenharia de modelos.

O projeto foi estruturado para resolver problemas progressivos, desde a previsão de valores contínuos até a simulação de um ambiente de produção com salvamento de modelos.

## Pré-requisitos e Instalação

Para executar os scripts contidos neste projeto, é necessário ter o Python instalado e as bibliotecas listadas abaixo:

pip install pandas numpy scikit-learn xgboost matplotlib seaborn

## Estrutura do Repositório

* desafio_1_corretor.py: Script de regressão para precificação imobiliária.
* desafio_2_sommelier.py: Script de classificação multiclasse para análise de vinhos.
* desafio_3_fraude.py: Script focado em detecção de anomalias em dados desbalanceados.
* desafio_4_duelo.py: Script comparativo de performance entre algoritmos.
* desafio_5_engenharia.py: Script de otimização (Early Stopping) e persistência de dados.
* desafio_5_modelo.json: Modelo serializado gerado pelo desafio 5.

## Detalhes dos Desafios

### Desafio 1: O Corretor de Imóveis (Regressão)
* Cenário: Previsão do preço mediano de casas na Califórnia.
* Objetivo Técnico: Configurar o XGBoost para tarefas de regressão e traduzir métricas estatísticas em valores de negócio.
* Destaques:
    * Uso do objetivo reg:squarederror.
    * Avaliação via RMSE (Root Mean Squared Error) e MAE convertidos para Dólares.

### Desafio 2: O Sommelier de Vinhos (Classificação Multiclasse)
* Cenário: Categorização de vinhos em três classes de cultivadores baseada em análise química.
* Objetivo Técnico: Implementar classificação não-binária e analisar erros cruzados.
* Destaques:
    * Uso do objetivo multi:softmax com num_class=3.
    * Visualização de performance através de Matriz de Confusão (Heatmap).

### Desafio 3: O Detector de Fraudes (Dados Desbalanceados)
* Cenário: Identificação de transações financeiras fraudulentas em um dataset com apenas 1% de casos positivos.
* Objetivo Técnico: Resolver o problema da "Acurácia Falsa" em classes minoritárias.
* Destaques:
    * Comparação entre modelo padrão e modelo ponderado.
    * Uso do parâmetro scale_pos_weight para aumentar a sensibilidade (Recall) do modelo.

### Desafio 4: Duelo de Modelos (Árvore vs. XGBoost)
* Cenário: Comparativo direto entre uma Decision Tree convencional e o XGBoost (Gradient Boosting).
* Objetivo Técnico: Demonstrar a superioridade de métodos de Ensemble sob restrições computacionais.
* Destaques:
    * Ambos os modelos limitados a profundidade máxima de 3 (max_depth=3).
    * Análise de tempo de treino versus ganho de acurácia.

### Desafio 5: Engenharia de ML (Early Stopping e Salvamento)
* Cenário: Treinamento eficiente em grandes volumes de dados e deploy do modelo.
* Objetivo Técnico: Evitar desperdício computacional e exportar o modelo para produção.
* Destaques:
    * Implementação de Early Stopping (parada automática quando o aprendizado estagna).
    * Serialização do modelo em formato JSON (save_model) e carregamento para inferência isolada.