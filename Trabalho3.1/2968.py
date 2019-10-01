import math

V, N = input().split()

V = int(V)
N = int(N)

distanciaTotal = V * N
valorPorcentagem = 0
lista = []

for i in range(1, 10):
    valorPorcentagem = distanciaTotal * (i / 10)

    if(valorPorcentagem % 2 != 0):
        lista.append(str(math.ceil(valorPorcentagem)))
    else:
        lista.append(str(math.floor(valorPorcentagem)))

print('{} {} {} {} {} {} {} {} {}'.format(lista[0], lista[1], lista[2], lista[3], lista[4], lista[5], lista[6], lista[7], lista[8]))