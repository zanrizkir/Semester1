# Fungsi untuk mengkonversi nilai huruf ke nilai
def konversi_huruf_ke_nilai(nilai):
    if nilai == "A":
        return 4.0
    elif nilai == "A-":
        return 3.7
    elif nilai == "B+":
        return 3.3
    elif nilai == "B":
        return 3.0
    elif nilai == "B-":
        return 2.7
    elif nilai == "C+":
        return 2.3
    elif nilai == "C":
        return 2.0
    elif nilai == "D":
        return 1.0
    elif nilai == "E":
        return 0.0
    return -1.0  # Mengembalikan -1 jika nilai tidak valid

total_sks = 0.0
total_nilai = 0.0

nama_lkp = input("Nama Lengkap: ")
nim = input("NIM: ")
jurusan = input("Jurusan: ")
jumlah_matkul = int(input("Masukkan jumlah mata kuliah: "))

for i in range(1, jumlah_matkul + 1):
    nama_matkul = input(f"Nama Mata Kuliah ke-{i}: ")
    sks = int(input(f"Jumlah SKS Mata Kuliah {nama_matkul}: "))
    nilai = input(f"Nilai Mata Kuliah {nama_matkul} (A, A-, B+, B, B-, C+, C, D, atau E): ")

    bobot_nilai = konversi_huruf_ke_nilai(nilai)

    if bobot_nilai == -1.0:
        print("Nilai tidak valid. Silakan masukkan nilai yang benar.")
        exit(1)  # Keluar program dengan kode kesalahan

    total_sks += sks
    total_nilai += bobot_nilai * sks

ipk = total_nilai / total_sks

print(f"IPK Anda adalah: {ipk:.2f}")
