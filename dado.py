# Juego de los dados.

import random

def cube1():
    dado = random.randint(1, 6)
    print('You got: ' + str(dado))

def cube2():
    dado1 = random.randint(1, 6)
    dado2 = random.randint(1, 6)
    print('You got: ' + str(dado1) + ' and ' + str(dado2))

print('¿Desea lanzar uno o dos dados? (1. un dado   2. dos dados): ')
res = input()

while res:
    if res == '1':
        cube1()
    elif res == '2':
        cube2()
    else:
        print('Elija, por favor, una de las altenativas válidas.')

    print('¿Desea lanzar uno o dos dados? (1. un dado   2. dos dados   0. salir): ')
    res = input()

    if res == '0':
        break

print('¡Gracias!')
