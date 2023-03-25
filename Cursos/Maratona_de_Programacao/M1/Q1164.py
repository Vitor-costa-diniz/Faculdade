def is_perfect(n):
    div = []
    for i in range(1, (n//2) + 1):
        if(n % i == 0):
            div.append(i)
    return sum(div) == n

nt = int(input())
for i in range(nt):
    n = int(input())
    if is_perfect(n):
        print(f'{n} eh perfeito')
    else:
        print(f'{n} nao eh perfeito')




