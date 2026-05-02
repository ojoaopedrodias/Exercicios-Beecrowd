N = int(input(""))

for i in range(N):
    linha = input().split()
    X = int(linha[0])
    Y = int(linha[1])

    if Y == 0:
        print("divisao impossivel")
    else:
        div = X / Y
        print(div)