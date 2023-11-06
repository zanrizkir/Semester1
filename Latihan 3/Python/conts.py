import math

AKAR = 2 #Mendefinisikan Conts
PANGKAT = 2 #Mendefinisikan Conts

angka = 4

hasilAkar = int(math.pow(angka,1.0 / AKAR))
hasilPangkat = int(math.pow(angka, PANGKAT))

print(f"Akar dari angka {angka} = {hasilAkar}")
print(f"{angka} pangkat {PANGKAT} adalah {hasilPangkat}")

