# Fungsi untuk menghitung gaji bersih
def hitung_gaji_bersih(pendidikan, jenis_kelamin, jumlah_anak):
    # Menghitung gaji pokok dari pendidikan
    if pendidikan == "D3":
        gaji_pokok = 500000
    elif pendidikan == "S1":
        gaji_pokok = 750000
    elif pendidikan == "S2":
        gaji_pokok = 1000000
    else:
        print("Pilihan Pendidikan tidak sesuai.")
        exit(1)  # Keluar program dengan kode kesalahan

    if jenis_kelamin not in [1, 2]:
        print("Pilihan Jenis Kelamin tidak sesuai.")
        exit(1)  # Keluar program dengan kode kesalahan

    # Menghitung tunjangan istri
    tunjangan_istri = 500000 if jenis_kelamin == 1 else 0

    # Menghitung tunjangan anak
    tunjangan_anak = (200000 * jumlah_anak) if jenis_kelamin == 1 and 0 < jumlah_anak <= 2 else 0

    # Menghitung gaji bersih setelah dipotong pajak 5%
    gaji_bersih = gaji_pokok + tunjangan_istri + tunjangan_anak * 0.05

    # Hasil penghitungan
    print(f"Gaji Pokok        : Rp. {gaji_pokok}")
    print(f"Tunjangan Istri   : Rp. {tunjangan_istri}")
    print(f"Tunjangan Anak    : Rp. {tunjangan_anak}")
    print(f"Gaji Bersih       : Rp. {gaji_bersih:.2f}")


# Main Program
print("=================== DATA KARYAWAN ====================")
nama_kry = input("Masukkan Nama Lengkap: ")
jenis_kelamin = int(input("Masukkan jenis kelamin (1 = Laki-laki / 2 = Perempuan): "))
pendidikan = input("Masukkan pendidikan (D3/S1/S2): ")
jumlah_anak = int(input("Masukkan jumlah anak: "))

# Memanggil fungsi hitung_gaji_bersih
hitung_gaji_bersih(pendidikan, jenis_kelamin, jumlah_anak)
