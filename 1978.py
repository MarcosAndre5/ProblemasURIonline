while True:
    N, L, A = input().split()
    if N == '0':
        break
    N = int(N)
    L = int(L)
    A = int(A)
    for i in range(N):
        X, R = input().split()
