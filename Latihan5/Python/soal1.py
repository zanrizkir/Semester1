def hitung_ipk():
    totalSks = 0
    totalNilai = 0

    jumlahMatkul = int(input("Masukkan jumlah mata kuliah: "))

    for i in range(jumlahMatkul):
        namaMatkul = input(f"Nama Mata Kuliah ke-{i + 1}: ")
        sks = int(input(f"Jumlah SKS Mata Kuliah {namaMatkul}: "))
        nilai = input(f"Nilai Mata Kuliah {namaMatkul} (A, A-, B+, B, B-, C+, C, D, atau E): ")

        if nilai == "A":
            bobot_nilai = 4.0
        elif nilai == "A-":
            bobot_nilai = 3.7
        elif nilai == "B+":
            bobot_nilai = 3.3
        elif nilai == "B":
            bobot_nilai = 3.0
        elif nilai == "B-":
            bobot_nilai = 2.7
        elif nilai == "C+":
            bobot_nilai = 2.3
        elif nilai == "C":
            bobot_nilai = 2.0
        elif nilai == "D":
            bobot_nilai = 1.0
        elif nilai == "E":
            bobot_nilai = 0.0
        else:
            print("Nilai tidak valid. Silakan masukkan nilai yang benar.")
            return

        totalSks += sks
        totalNilai += (bobot_nilai * sks)

    ipk = totalNilai / totalSks
    print(f"IPK Anda adalah: {ipk:.2f}")

if __name__ == "__main__":
    hitung_ipk()
