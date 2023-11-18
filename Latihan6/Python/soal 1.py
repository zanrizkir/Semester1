# Fungsi Kalkulator
def tambah(a, b):
    return a + b

def kurang(a, b):
    return a - b

def kali(a, b):
    return a * b

def bagi(a, b):
    if b != 0:
        return a / b
    else:
        print("Pembagian oleh nol tidak bisa.")
        return 0

def modulo(a, b):
    if b != 0:
        return a % b
    else:
        print("Modulo dengan nol tidak bisa.")
        return 0

bilangan1 = float(input("Masukkan bilangan Pertama: "))
operasi = input("Pilih salah satu operasi (+, -, *, /, %): ")
bilangan2 = float(input("Masukkan bilangan Kedua: "))

# Menentukan operasi yang dipilih
if operasi == '+':
    print(f"{bilangan1} + {bilangan2} = {tambah(bilangan1, bilangan2)}")
elif operasi == '-':
    print(f"{bilangan1} - {bilangan2} = {kurang(bilangan1, bilangan2)}")
elif operasi == '*':
    print(f"{bilangan1} * {bilangan2} = {kali(bilangan1, bilangan2)}")
elif operasi == '/':
    print(f"{bilangan1} / {bilangan2} = {bagi(bilangan1, bilangan2)}")
elif operasi == '%':
    print(f"{bilangan1} % {bilangan2} = {modulo(bilangan1, bilangan2)}")
else:
    print("Operasi tidak sesuai.")
