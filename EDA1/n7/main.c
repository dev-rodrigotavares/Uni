#include <stdio.h>
#include "abp.h"

int main(){
    SearchTree T = NULL;
    Position P;

    int valores[] = {80, 12, 78, 85, 17, 9, 89, 11};
    int n = 8;

    for(int i = 0; i < n; i++){
        T = Insert(valores[i], T);
    }

    P = Find(17, T);
    if(P != NULL)
        printf("Encontrei: %d\n", Retrieve(P));
    else
        printf("17 nao encontrado\n");

    // Testar FindMin
    P = FindMin(T);
    if(P != NULL)
        printf("Minimo: %d\n", Retrieve(P));

    // Testar FindMax
    P = FindMax(T);
    if(P != NULL)
        printf("Maximo: %d\n", Retrieve(P));

    // Remoções do exercício
    T = Delete(12, T);
    T = Delete(9, T);
    T = Delete(80, T);

    // Testar árvore final
    P = Find(85, T);
    if(P != NULL)
        printf("Raiz/final contem: %d\n", Retrieve(P));

    P = FindMin(T);
    if(P != NULL)
        printf("Minimo final: %d\n", Retrieve(P));

    P = FindMax(T);
    if(P != NULL)
        printf("Maximo final: %d\n", Retrieve(P));

    // Esvaziar árvore
    T = MakeEmpty(T);

    return 0;
}