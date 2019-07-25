N = int(input())
quantidadeDeRepeticoes = 1

while quantidadeDeRepeticoes <= N:
    nome = input()

    digito1 = int(nome[0])
    letra = nome[1]
    digito2 = int(nome[2])

    if digito1 == digito2:
        resultado = digito1 * digito2
    elif letra.isupper() == True: #isupper() é uma função de Python que retorna True se um caractere for maiúsculo e False caso seja minúsculo.
        resultado = digito2 - digito1
    elif letra.isupper() == False:
        resultado = digito1 + digito2

    print(resultado)
    quantidadeDeRepeticoes += 1