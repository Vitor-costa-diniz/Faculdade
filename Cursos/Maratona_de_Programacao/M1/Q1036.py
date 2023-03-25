import math
a,b,c = map(float,input().split())
d = (b**2)-(4*a*c)
if(d <0 or a==0):
    print("Impossivel calcular")
else:
    d=math.sqrt(d)
    r1 = (-b+d)/(2*a)
    r2 = (-b-d)/(2*a)
    print(f'R1 = {r1:0.5f}\nR2 = {r2:0.5f}')