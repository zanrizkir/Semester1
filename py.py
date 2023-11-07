# Menentukan jumlah baris
n = 4

# Loop untuk setiap baris
for i in range(1, n + 1):
    # Loop untuk setiap angka dalam baris saat ini
    for j in range(1, i + 1):
        # Mencetak angka dengan spasi sebagai pemisah
        print(j, end=" ")
    # Pindah ke baris berikutnya setelah selesai mencetak baris saat ini
    print()
