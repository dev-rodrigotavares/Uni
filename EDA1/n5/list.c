#include "list.h"
#include <stdlib.h>
#include "fatal.h"
#include <stdbool.h>


struct Node{
    ElementType Element;
    Position    Next;
    Position    Prev;
};


List CreateList( List L )
{
    if( L != NULL )
        DeleteList( L );
    else{
        L = malloc( sizeof( struct Node ) );
        if( L == NULL )
            FatalError( "Out of memory!" );
        L->Next = NULL;
        L->Prev = NULL;
    }
    return L;
}



bool IsEmpty( List L ){
    if(L->Next == NULL){
        return true;
    }
    return false;
   
}

bool IsLast( Position P, List L ){

    if(P->Next == NULL){
        return true;
    }
    return false;

}
   

Position Find( ElementType X, List L ){
    PtrToNode P = L;
    while(P != NULL){
        if(P->Element == X){
            return P;
        }
        else{
            P = P->Next;
        }
    }
    
}


Position FindPrevious(ElementType X, List L){
    Position P = Find(X, L);

    if(P != NULL)
        return P->Prev;

    return NULL;
}


void Insert(ElementType X, List L, Position P){
    PtrToNode temp = malloc(sizeof(struct Node));
    if(temp == NULL)
        FatalError("Out of memory!");

    temp->Element = X;
    temp->Next = P->Next;
    temp->Prev = P;

    if(P->Next != NULL)
        P->Next->Prev = temp;

    P->Next = temp;
}

void Delete(ElementType X, List L){
    PtrToNode atual = Find(X, L);

    if(atual != NULL){
        PtrToNode prev = atual->Prev;
        prev->Next = atual->Next;

        if(atual->Next != NULL)
            atual->Next->Prev = prev;

        free(atual);
    }
}


void DeleteList( List L ) {
    PtrToNode P = L;
    PtrToNode temp;
    while (P != NULL)
    {
        temp = P->Next;
        free(P);
        P = temp;

    }
    L->Next = NU;
    
}


Position Header( List L ) {
    return L;
}


Position First( List L ) {
    return L->Next;
}


Position Advance( Position P ) {
    return P->Next;
    
}


ElementType Retrieve( Position P ) {
    return P->Element;
}

void PrintList(List L){
    PtrToNode P = First(L);
    while(P != NULL){
        printf("%d ", P->Element);
        P = P->Next;
    }
}