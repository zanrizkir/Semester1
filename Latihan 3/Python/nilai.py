nilai_pratikum = int(input("Masukan Nilai Pratikum = "))
nilai_teori = int(input("Masukan Nilai Teori = "))
final_project = int(input("Masukan Nilai Tugas dan Final Project = "))

rata_rata = int((0.4 * nilai_pratikum) + (0.4 * nilai_teori) + (0.2 * final_project))

print ("Nilai Rata-rata mata kuliah Algoritma Struktur Data ", rata_rata)