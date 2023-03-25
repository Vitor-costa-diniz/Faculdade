n = int(input('Digite pra quantos algorismos pretende verificar: '))
max,min = 0, 10 ** (n+2)

for i in range(10**(n-1), 10**n):
        for j in range(i, 10**n):
            produto = i * j
            if(str(produto) == str(produto)[::-1]):
                if produto > max:
                    max = produto
                if produto < min:
                    min = produto
print(f'Menor palíndromo para {n} algorismos: {min}')
print(f'Maior palíndromo {n} algorismos: {max}')
    





