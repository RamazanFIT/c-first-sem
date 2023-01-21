def binary_number(digit): # функция переводит из десятичной в двоичную систему
    binary = ''
    while digit > 0:
        if digit % 2 == 0:
            binary += '0'
            digit /= 2
        else:
            binary += '1'
            digit = (digit - 1) / 2
    binary = list(binary)
    binary.reverse()
    binary = ''.join(binary)
    return int(binary)
 
string = input()
new_string = ''
number = ''
index = 0 
 
for symbol in string:   # перебираем все символы в строке
    if symbol.isdigit():  # если символ - цифра, то добавляем его в число, которое отправим на перевод в двоичное
        number += symbol
        index += 1 # шагаем по индексам с целью обнаружить, если дошли до конца строки
        if index == len(string): # если вся строка кончается цифрой, то блок elif не выполняется, поэтому нужна эта проверка.
            new_string += str(binary_number(int(number)))
            number = ''
    elif number != '': # как только встретился символ не цифра, а число закончилось, то отправляем его в функцию
        new_string += str(binary_number(int(number)))
        number = ''
        new_string += symbol
        index += 1
    else: # если символ - не цифра и предыдущий символ тоже не цифра
        new_string += symbol
        index += 1
print(new_string)