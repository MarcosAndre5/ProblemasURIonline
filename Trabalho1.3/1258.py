while True:
    N=int(input())
    if N==0:
        print()
        break
    brancaP=[]
    brancaM=[]
    brancaG=[]
    vermelhaP=[]
    vermelhaM=[]
    vermelhaG=[]
    for i in range(N):
        nome=input()
        cor,tamanho=input().split()
        if cor=='branco':
            if tamanho=='P':
                brancaP.append(nome)
            elif tamanho=='M':
                brancaM.append(nome)
            elif tamanho=='G':
                brancaG.append(nome)
        elif cor=='vermelho':
            if tamanho=='P':
                vermelhaP.append(nome)
            elif tamanho=='M':
                vermelhaM.append(nome)
            elif tamanho=='G':
                vermelhaG.append(nome)
    brancaP.sort()
    brancaM.sort()
    brancaG.sort()
    vermelhaP.sort()
    vermelhaM.sort()
    vermelhaG.sort()
    for i in range(len(brancaP)):
        print('{} {} {}'.format('branco', 'P', brancaP[i]))
    for i in range(len(brancaM)):
        print('{} {} {}'.format('branco', 'M', brancaM[i]))
    for i in range(len(brancaG)):
        print('{} {} {}'.format('branco', 'G', brancaG[i]))
    for i in range(len(vermelhaP)):
        print('{} {} {}'.format('vermelho', 'P',vermelhaP[i]))
    for i in range(len(vermelhaM)):
        print('{} {} {}'.format('vermelho', 'M',vermelhaM[i]))
    for i in range(len(vermelhaG)):
        print('{} {} {}'.format('vermelho', 'G',vermelhaG[i]))
    print()