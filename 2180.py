peso=int(input())

velocidade=0
contador=0

while True:
    if contador==10:
        break

    divisiveis=0

    for i in range(1,peso+1):

        if peso%i==0:
            divisiveis+=1

    if divisiveis==2:
        contador+=1
        velocidade+=peso
        
    peso+=1
print('{} km/h\n{:.0f} h / {:.0f} d'.format(velocidade,int(60000000/velocidade),int((60000000/velocidade)/24)))