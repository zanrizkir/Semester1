# Calculator
def kalkulator(angka1, angka2, operator):
    #(+)
    if(operator == '+'):
        return angka1 + angka2
    #(-)
    elif(operator == '-'):
        return angka1 - angka2
    #(*)
    elif(operator == '*'):
        return angka1 * angka2
    #(/)
    elif(operator == '/'):
        return angka1 / angka2
    #(%)
    elif(operator == '%'):
        return angka1 % angka2
    else:
        return '404 Not Found'

# initialization
def inti():
    print('Kalkulator Sederhana')

    angka1 = int(input('Masukan\'s Angka Pertama '))
    operator = input('Masukan Operator   (+, -, *, /, %)? ')
    angka2 = int(input('Masukan\'s Angka Kedua '))

    print(angka1, operator, angka2, ' = ', kalkulator(angka1, angka2, operator))

# call the initializer
inti()