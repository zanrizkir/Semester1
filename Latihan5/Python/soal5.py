# Inisialisasi a
a = 10

# Loop i dari a hingga 1
for i in range(a, 0, -1):
    # Loop n dari 1 hingga i
    for n in range(1, i + 1):
        # Jika nilai Loop n tidak lebih besar dari a
        if n <= a:
            print(i * n, end=" ")
    # Akhir loop n
    print()  # Cetak baris kosong

# Jika nilai loop i lebih besar dari a
if a < 1:
    print("Program selesai")
