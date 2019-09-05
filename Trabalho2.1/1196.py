caracteres = '`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./'

while True:
    try:
        frase = input()
        traducao = ''
        for i in frase:
            if i == ' ':
                traducao += i
            else:
                traducao += caracteres[caracteres.index(i) - 1]
        print(traducao)
    except EOFError:
        break
