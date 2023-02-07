/* Juego de Tres en Raya Simple. */
/* Este juego es creado con base en el video de un youtuber. */

#include <stdio.h>
#include <stdlib.h>

void loop(char c[3][3]);            // Prototipos de funciones.
void Intro_Primera(char c[3][3]);
void tablero(char c[3][3]);

int main()
{
    char c[3][3];          // Tablero.

    loop(c);                // Función loop que llama a todas la funciones fundamentales y hace un refresco de pantalla.

    system("pause");
    return 0;
}

void loop(char c[3][3])
{
    Intro_Primera(c);
    tablero(c);
}

void Intro_Primera(char c[3][3])
{
    int i, j;
    char aux;

    aux = '1';

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = aux++;
        }
    }
}

void tablero(char c[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j < 2)
                printf(" %c |", c[i][j]);
            else
                printf(" %c ", c[i][j]);
        }

        if (i < 2)
            printf("\n-----------\n");
    }

    printf("\n\n");
}
