n = int(input('Quantos números deseja na sequencia?: '))
pares, primos = [], []
a, b = 0, 1
while a < n:
    if(a % 2 == 0):
        pares.append(a)
    if(a > 1) :
        if(a % 2 != 0 and a % 3 != 0 and a % 5 != 0):
            primos.append(a)
    print(a, end=',\n')
    a, b = b, a+b
print(f'Soma dos números pares: {sum(pares)}')
print(f'Soma dos números pares: {sum(primos)}')
