n = int(input())

for _ in range(n):
    entrada = input().split()
    f1 = int(entrada[0])
    f2 = int(entrada[1])
    a = f1
    b = f2
    while b != 0:
        resto = a % b
        a = b
        b = resto
    print(a)