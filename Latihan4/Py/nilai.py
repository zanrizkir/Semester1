nilai = int(input("Masukan Nilai = "))

if nilai >= 80 and nilai <= 100:
    print("Nilai A")
elif nilai >= 65 and nilai <= 79:
    print("Nilai B")
elif nilai >= 50 and nilai <= 64:
    print("Nilai C")
elif nilai >= 35 and nilai <= 49:
    print("Nilai D")
elif nilai >= 0 and nilai <= 34:
    print("Nilai E")
else:
    print("404 Not Found")
