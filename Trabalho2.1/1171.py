N = int(input())

listaNumeros = {}

for i in range(N):
    numero = int(input())
    if(numero in listaNumeros):
        listaNumeros[numero] += 1
    else:
        listaNumeros[numero] = 1

chaves = listaNumeros.keys()

chaves = sorted(listaNumeros)

for i in chaves:
    print('{} aparece {} vez(es)'.format(i, listaNumeros[i]))
