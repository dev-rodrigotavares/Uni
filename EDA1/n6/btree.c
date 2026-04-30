#include "btree.h"
#include <stdlib.h>
#include "fatal.h"

struct TreeNode{
    ElementType Element;
    BTree  Left;
    BTree  Right;
};


BTree MakeEmpty( BTree T ){
    
    if(T != NULL){
    MakeEmpty(T->Left);
    MakeEmpty(T->Right);
    free(T);
    }
return NULL;

}


BTree SetTree( ElementType X, BTree Left, BTree Right ){
    BTree T;

    T = malloc(sizeof(struct TreeNode));
    if(T == NULL){
        printf("Erro");
    }
    else{
        T->Element = X;
        T->Left = Left;
        T->Right = Right;
        return T;
    }
}


Position Find( ElementType X, BTree T ){
    
    Position P;

    if (T == NULL){
    printf("ERRO");
    return NULL;
    }

    if(T->Element == X){
        return T;
    }

    P = Find(X, T->Left);

    if(P != NULL){
        return P;
    }

    P = Find(X, T->Right);

    return P;

}


ElementType Retrieve( Position P ){

if(P != NULL){
    return P->Element;
}
}

void PrintInOrder(BTree T){
    if(T == NULL)
    return;

    PrintInOrder(T->Left);
    printf("%d", T->Element);
    PrintInOrder(T->Right);



}
void PrintPreOrder(BTree T){
    if(T == NULL)
    return;

    printf("%d", T->Element);
    PrintPreOrder(T->Left);
    PrintPreOrder(T->Right);


}
void PrintPostOrder(BTree T){

    if(T == NULL)
    return 

    PrintPostOrder(T->Left);
    PrintPostOrder(T->Right);
    printf("%d", T->Element);

}


int FindMax( BTree T ){
    if(T == NULL)
    return -199999;
    
    
    int max, aux;
    
    max = T->Element;
    
    aux = FindMax(T->Left);
    if (aux > max){
        max = aux;
    }
    aux = FindMax(T->Right);
    if(aux > max){
        max = aux;
    }
    
    return max;
}
int FindMin( BTree T ){
    if(T == NULL)
    return 10000;
    
    
    int min, aux;
    
    min = T->Element;
    
    aux = FindMin(T->Left);
    if (aux < min){
        min = aux;
    }
    aux = FindMin(T->Right);
    if(aux < min){
        min = aux;
    }
    
    return min;
}

