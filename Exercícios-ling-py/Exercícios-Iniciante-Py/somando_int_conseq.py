linha = input().split()
A = int(linha[0])
N = int(linha[1])

posicao = 2
while N <= 0:
    N = int(linha[posicao])
    posicao += 1

i = 0
soma = 0
while i < N:
    soma = soma + (A + i)
    i += 1
print(soma)