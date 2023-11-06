import math

alas = int(input("Masukan Alas     = "))
tinggi = int(input("Masukan tinggi = "))


sisimiring =int(math.sqrt(alas * alas + tinggi * tinggi))
keliling = int(alas + tinggi + sisimiring)

print(f"Sisi miring: {sisimiring}")
print(f"Keliling: {keliling}")