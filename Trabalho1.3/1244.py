N=int(input())
for i in range(N):
    string=input().split()
    string.sort(key=len,reverse=True)
    for j in range(len(string)):
        if j==len(string)-1:
            print(string[j])
        else:
            print(string[j],end=" ")