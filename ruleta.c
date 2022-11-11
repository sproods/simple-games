// Juego en el que se digitan siete palabras y luego el programa realiza una selección aleatoria mostrando en pantalla una palabra cualquiera.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 6
#define TAM 50

void words(char [][TAM], int);
void lucky(char [][TAM], int);

void main(void)
{
    int tam = MAX;
    char wor[MAX][TAM];

    printf("\n¡Bienvenido al juego de la ruleta!\n");
    words(wor, tam);
    lucky(wor, tam);

    printf("\nThanks!\n");
}

void words(char A[MAX][TAM], int T)
{
    int i;

    for (i = 0; i <= T; i++)
    {
        printf("\nDigite la palabra %d en la ruleta: ", i + 1);
        gets(A[i]);
        fflush(stdin);
    }
}

void lucky(char A[MAX][TAM], int T)
{
    int i, N, res;
    char var[TAM], VAR[TAM];

    printf("\nPUlse 1 para iniciar el sorteo: ");
    scanf("%d", &res);
    fflush(stdin);
    
    while(true)
    {
        srand(time(NULL));
        N = rand() % 7;
        
        strcpy(var, A[N]);

        i = 0;
        while(var[i] != '\0')
        {
            VAR[i] = toupper(var[i]);
            i++;
        }
        VAR[i] = '\0';

        printf("\nLa palabra elegida es %s\n", VAR);

        printf("\n¿Desea seguir probando suerte? (1.Sí   0.No): ");
        scanf("%d", &res);
        fflush(stdin);

        if (res == 0)
            break;
    }
}
    
