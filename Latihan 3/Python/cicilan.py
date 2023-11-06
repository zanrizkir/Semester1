harga_motor = int(input("Masukan Harga Motor : "))
lama_kredit = int(input("Masukkan lama kredit (dalam bulan): "))

harga_pokok = int(harga_motor / lama_kredit)
bunga = int(harga_pokok * 0.1)
cicilan = int(harga_pokok + bunga)
total_harga = int(cicilan * lama_kredit)
keuntungan = int(total_harga - harga_motor)

print("Harga Pokok = ", harga_pokok)
print("Bunga = ", bunga)
print("Cicilan /bulan = ", cicilan)
print("Total harga motor = ", total_harga)
print("Keuntungan Dealer = ", keuntungan)

