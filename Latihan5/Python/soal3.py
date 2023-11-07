def konversi(nilai):
    if nilai == "A":
        return 4.0
    if nilai == "A-":
        return 3.7
    if nilai == "B+":
        return 3.3
    if nilai == "B":
        return 3.0
    if nilai == "B-":
        return 2.7
    if nilai == "C+":
        return 2.3
    if nilai == "C":
        return 2.0
    if nilai == "D":
        return 1.0
    if nilai == "E":
        return 0.0
    return -1.0  # Mengembalikan -1 jika nilai tidak valid

while True:
    print("Menu:")
    print("1. Menghitung IPK")
    print("2. Keluar")
    
    menu = input("Pilih menu (1/2): ")
    
    if menu == "1":
        totalSks = 0
        totalNilai = 0
        
        jumlahMatkul = int(input("Masukkan jumlah mata kuliah: "))
        
        for i in range(1, jumlahMatkul + 1):
            namaMatkul = input(f"Nama Mata Kuliah ke-{i}: ")
            sks = int(input(f"Jumlah SKS Mata Kuliah {namaMatkul}: "))
            nilai = input(f"Nilai Mata Kuliah {namaMatkul} (A, A-, B+, B, B-, C+, C, D, atau E): ")
            
            bobotNilai = konversi(nilai)
            
            if bobotNilai == -1.0:
                print("Nilai tidak valid. Silakan masukkan nilai yang benar.")
                break  # Keluar dari loop
            else:
                totalSks += sks
                totalNilai += bobotNilai * sks
        
        if totalSks > 0:
            ipk = totalNilai / totalSks
            print(f"IPK Anda adalah: {ipk:.2f}")
    elif menu == "2":
        print("Terima kasih! Program selesai.")
        break  # Keluar dari loop
    else:
        print("Pilihan tidak valid. Silakan pilih menu yang benar.")
