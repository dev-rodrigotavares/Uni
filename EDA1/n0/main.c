#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "Nim.h"

int main()
{
    srand(time(NULL));

    char n1[50], n2[50];
    int numpilhas;

    printf("Vamos jogar\n");
    printf("Digite o 1º nome: ");
    scanf("%s", n1);
    printf("\n");
    printf("Digite o 2º nome: ");
    scanf("%s", n2);
    printf("\n");

    printf("Quantas pilhas tem este jogo? ");
    scanf("%d", &numpilhas);
    printf("\n");

    Nim jogo = novoJogo(numpilhas, n1, n2);

    jogar(jogo);

    return 0;
}