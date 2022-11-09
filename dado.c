// Juego de azar en la que se muestra en pantalla un número aleatorio entre el uno y el seis (incluidos), tal como un dado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cubeNumber1(void);          // Función que se encargará de obtener el número random.
void cubeNumber2(void);

void main(void)
{
    int res;

    printf("\nEste es el maravilloso juego de los dados\n");
    printf("\n¿Desea tirar uno o dos dados? (1. Un dado   2.dos dados): ");
    scanf("%d", &res);

    while(res)
    {
        switch(res)
        {
            case 1: cubeNumber1();
                    break;
            case 2: cubeNumber2();
                    break;
        }

        printf("\n¿Desea tirar uno o dos dados? (1. un dado   2. dos dados   0. salir): ");
        scanf("%d", &res);
    }

    printf("\n¡Gracias!\n");
}

void cubeNumber1(void)
{
    int cube;

    srand(time(NULL));

    cube = rand() % 7;

    printf("\nYou got: %d\n", cube);
}

void cubeNumber2(void)
{
    int cube1, cube2;

    srand(time(NULL));

    cube1 = rand() % 7;
    cube2 = rand() % 7;

    printf("\nYou got: %d and %d\n", cube1, cube2);
}
