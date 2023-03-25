ddd = int(input())
ddds = {11:'Brasilia', 71:'Salvador', 11: 'São Paulo', 21:'Rio de Janeiro', 32:'Juiz de Fora',19 : 'Campinas', 27:'Vitoria', 31:'Belo Horizonte'}

if(ddd in ddds.keys()):
    print(ddds[ddd])
else:
    print('DDD nao cadastrado')