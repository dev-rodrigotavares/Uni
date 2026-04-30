#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    List L = NULL;
    L = CreateList(L);

    Insert(10, L, Header(L));
    Insert(20, L, Find(10, L));
    Insert(30, L, Find(20, L));
    PrintList(L);
    printf("\n");

    Delete(20, L);
    PrintList(L);
    printf("\n");

    Insert(66, L, Find(10, L));
    PrintList(L);
    printf("\n");

    return 0;
}