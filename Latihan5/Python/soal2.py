# Inisialisasi variabel
totalPenjualan = 0
n = int(input("Masukkan jumlah jenis barang: "))

# Loop untuk menginput harga dan jumlah barang
for i in range(n):
    harga = int(input(f"Masukkan harga barang ke-{i + 1}: "))
    jumlah = int(input(f"Masukkan jumlah barang ke-{i + 1}: "))
    subTotal = harga * jumlah
    totalPenjualan += subTotal

# Menghitung diskon berdasarkan total penjualan
if totalPenjualan > 500000:
    diskon = 0.1  # Diskon 10%
elif totalPenjualan >= 200000:
    diskon = 0.05  # Diskon 5%
else:
    diskon = 0  # Tidak ada diskon

# Menghitung total pembayaran setelah diskon
totalPembayaran = totalPenjualan - (totalPenjualan * diskon)

# Menampilkan total penjualan dan total pembayaran
print(f"Total Penjualan: Rp {totalPenjualan:.2f}")
print(f"Diskon: {diskon * 100}%")
print(f"Total Pembayaran setelah Diskon: Rp {totalPembayaran:.2f}")
