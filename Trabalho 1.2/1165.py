N = int(input())

for iteracoes in range(N):
    divisiveis = 0
    X = int(input())

    for i in range(1, X + 1):
        if X % i == 0:
            divisiveis += 1

    if divisiveis == 2:
        print('{} eh primo'.format(X))
    else:
        print('{} nao eh primo'.format(X))
