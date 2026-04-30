//
//  Nim.c
//  hello-26
//
//  Created by Ligia Ferreira on 09/02/2026.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Nim.h"

#define Error(Str) FatalError(Str)
#define FatalError(Str) fprintf(stderr, "%s\n", Str), exit(1)

struct NimGame
{
    int size;
    int *oArray;
    int jogadorVez;
    char **jogadores;
};

void trocaVez(Nim j)
{
    if (j->jogadorVez == 0)
    {
        j->jogadorVez = 1;
    }
    else
    {
        j->jogadorVez = 0;
    }
}

Nim novoJogo(int numPilhas, char *joq1, char *jog2)
{
    Nim jogo;
    jogo = malloc(sizeof(struct NimGame));
    if (jogo == NULL)
        FatalError("Memória insufuciente");
    jogo->size = numPilhas;
    jogo->oArray = malloc(sizeof(int) * numPilhas);
    if (jogo->oArray == NULL)
        FatalError("Memória insufuciente");

    jogo->jogadores = malloc(2 * sizeof(char *));

    jogo->jogadores[0] = joq1;
    jogo->jogadores[1] = jog2;
    for (int i = 0; i < jogo->size; i++)
    {
        printf("Quantos elementos tem a pilha %d ? ", i + 1);
        scanf("%d", &jogo->oArray[i]);
    }
    jogo->jogadorVez = rand() % 2;
    return jogo;
}

void printJogo(Nim j)
{

    int n = j->size;

    for (int i = 0; i < n; i++)
    {

        printf("Pilha %d =", i + 1);
        if (j->oArray[i] == 0)
        {
            printf("0");
        }
        else
        {
            for (int k = 0; k < j->oArray[i]; k++)
            {
                printf("i");
            }
            printf(" (%d)", j->oArray[i]);
        }
        printf("\n");
    }
}

void retira(Nim jogo, int x, int pilha)
{
    int p = pilha - 1;
    if (jogo->oArray[p] == 0)
    {
        printf("A pilha escolhida esta vazia!\n");
    }
    else
    {
        if (x > jogo->oArray[p])
        {
            printf("Numero superior a quantidade de objetos!\n");
        }
        else
        {
            jogo->oArray[p] -= x;
        }
    }
}
int avalia(Nim j)
{

    int total = 0;

    for (int i = 0; i < j->size; i++)
    {

        total += j->oArray[i];
    }
    if (total == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void jogar(Nim jogo)
{
    int game = 1;
    int x;
    int n;

    while (game == 1)
    {
        printJogo(jogo);

        printf("Joga %s\n", jogo->jogadores[jogo->jogadorVez]);

        printf("Qual a pilha [1-%d]?", jogo->size);
        scanf("%d", &x);
        printf("Quantos[1-%d]?", jogo->oArray[x - 1]);
        scanf("%d", &n);

        retira(jogo, n, x);
        if (avalia(jogo) == 1)
        {
            printf("Parabens!!!\nO jogador %s venceu", jogo->jogadores[jogo->jogadorVez]);
            game = 0;
        }
        trocaVez(jogo);
    }
}
