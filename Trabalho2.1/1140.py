while True:
    frase = input().split()
    
    if frase[0] == '*':
        break
    diferente = 0
    for i in range(len(frase)):
        if i > 0 and frase[i][0].upper() != frase[i - 1][0].upper():
            diferente+=1
            break
    if diferente == 1:
        print('N')
    else:
        print('Y')
