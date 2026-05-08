linha = input().split()
X = int(linha[0])
Y = int(linha[1])

for i in range(1, Y + 1):
    if i % X == 0:
        print(i)
    else:
        print(i, end=' ')