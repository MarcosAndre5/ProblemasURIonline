for x in range(int(input())): #T 
    Xij = []

    for i in range(int(input())): #N
        Xij.append(set(input().split()[1 : ])) #Mi

    for i in range(int(input())): #Q
    
        op, c1, c2=input().split()
        c1 = int(c1) - 1
        c2 = int(c2) - 1

        if op == '1':
            print(len(Xij[c1]&(Xij[c2])))
        else:
            print(len(Xij[c1]|(Xij[c2])))