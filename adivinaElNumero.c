// El programa se trata de un juego en el que el usuario debe adivinar el número oculto en menos de seis intentos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
    int secretNumber, yourNumber, intentos, i;

    srand(time(NULL));

    secretNumber = rand() % 21;

    printf("\nHay un número que está oculto, ¿podrás adivinarlo?");

    for (i = 0; i < 6; i++)
    {
        printf("\nDigita tu número: ");
        scanf("%d", &yourNumber);

        if (yourNumber < secretNumber)
            printf("\nTu número es menor al número buscado.\n");
        else
            if (yourNumber > secretNumber)
                printf("\nTu número es mayor al número buscado.\n");
            else
                break;
    }

    if (yourNumber == secretNumber)
        printf("\n¡Adivinaste¡\nLo hiciste en %d intentos.\n", i + 1);
    else
        printf("\nEl número oculto es %d.\nPrueba suerte más tarde, si quieres...\n", secretNumber);

    system("pause");
}
