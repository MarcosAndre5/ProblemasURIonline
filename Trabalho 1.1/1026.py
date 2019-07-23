while True:
    try:
        numero1, numero2 = input().split()
        numero1 = int(numero1)
        numero2 = int(numero2)

        resultado = numero1 ^ numero2

        print(resultado)

    except EOFError:
        break