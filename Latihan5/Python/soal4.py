n = 4

# Bagian pertama
for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(j, end=" ")
    print()

# Bagian kedua
for i in range(n, -1, -1):
    for j in range(0, i + 1):
        print(i, end=" ")
    print()
