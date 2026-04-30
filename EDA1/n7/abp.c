#include "abp.h"
#include <stdlib.h>
#include "fatal.h"

struct TreeNode{
    ElementType Element;
    SearchTree  Left;
    SearchTree  Right;
};

SearchTree MakeEmpty( SearchTree T ){
    if(T == NULL){
        return NULL;
    }

    MakeEmpty(T->Left);
    MakeEmpty(T->Right);
    free(T);
    return NULL;
}

SearchTree SetTree( ElementType X, SearchTree Left, SearchTree Right ){
    SearchTree T;

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



Position Find( ElementType X, SearchTree T ){
    if(T == NULL){
        return NULL;
    }
    Position P;

    if( X == T->Element){
        return T;
    }
    else{
        if(X < T->Element){
            P = Find(X, T->Left);
        }
        else{
            P = Find(X, T->Right);
        }
    
    }
    return P;


}


Position FindMin( SearchTree T ){
    if(T == NULL)
    return NULL;

    while(T->Left != NULL){
        T = T->Left;
    }

    return T;
}


Position FindMax( SearchTree T ){
    if(T == NULL){
        return NULL;
    }

    while(T->Right != NULL){
        T = T->Right;
    }
    return T;
}



SearchTree Insert( ElementType X, SearchTree T ){
    if(T == NULL){
    T = SetTree(X, NULL, NULL);
    return T;
    }

    if( X < T->Element){
        T->Left = Insert(X, T->Left);
    }
    else if(X > T->Element){
        T->Right = Insert(X, T->Right);
    }
    else{
        
    }
return T;
}


SearchTree Delete( ElementType X, SearchTree T ){
    Position temp;

    if (T == NULL){
        return NULL;
    }

    if (X < T->Element){
        T->Left = Delete(X, T->Left);
    }
    else if (X > T->Element){
        T->Right = Delete(X, T->Right);
    }
    else{

        if (T->Left != NULL && T->Right != NULL){
            
            temp = FindMin(T->Right);
            T->Element = temp->Element;
            T->Right = Delete(T->Element, T->Right);
        }
        else{
            temp = T;

            if (T->Left == NULL)
                T = T->Right;
            else
                T = T->Left;

            free(temp);
        }
    }

    return T;
}


ElementType Retrieve( Position P ){

    return P->Element;

}
