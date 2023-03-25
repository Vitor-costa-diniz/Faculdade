a = int(input())

ano = a // 365
mes = ((a - (ano * 365)) // 30)
dias = (a - (ano * 365) - (mes * 30))
print(f'{ano} ano(s)\n{mes} mes(es)\n{dias} dia(s)')
