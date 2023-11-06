# Input Data
NamaKaryawan = input ("Masukkan Nama Karyawan: ")
NIK = input("Masukkan NIK: ")
JenisKelamin = int(input("Masukkan Jenis Kelamin (0=perempuan, 1=laki-laki): "))
StatusPernikahan = int(input("Masukkan Status Pernikahan (0=single, 1=menikah): "))
JenisKendaraan = int(input("Masukkan Jenis Kendaraan (0=motor, 1=mobil): "))
GajiPokok = int(input("Masukkan Gaji Pokok: "))
UangMakan = int(input("Masukkan Uang Makan: "))

# Hitung Tunjangan
if JenisKelamin == 1 and StatusPernikahan == 1:
    Tunjangan = 500
else:
    Tunjangan = 0

# Hitung Transport
if JenisKendaraan == 1:
    Transport = 1000
elif JenisKendaraan == 0:
    Transport = 500
else:
    Transport = 0

# Hitung Gaji Kotor
GajiKotor = GajiPokok + Tunjangan + UangMakan + Transport

# Hitung Pajak
Pajak = 0.05 * GajiKotor

# Hitung Gaji Bersih
GajiBersih = GajiKotor - Pajak

# Output Data
print("Tunjangan:", Tunjangan)
print("Transport:", Transport)
print("Gaji Kotor:", GajiKotor)
print("Pajak:", Pajak)
print("Gaji Bersih:", GajiBersih)
