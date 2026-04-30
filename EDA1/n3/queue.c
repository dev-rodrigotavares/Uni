#include <stdlib.h>
#include "queue.h"
#include "fatal.h"


#define MinQueueSize ( 5 )

struct QueueRecord{
    int Capacity;
    int Front;
    int Rear;
    ElementType *Array;
};


// Faz a posiçao onde retira - onde inicia + a capacidade, tudo pelo modulo da capacidade
int size(Queue Q){
    return (Q->Rear - Q->Front + Q->Capacity) % Q->Capacity;
}


// indica o segunte tentro do limite da quantidade
int successor( int i, Queue Q ){
    return (i + 1) % Q->Capacity;
    
}



/* FUNCOES DE MANIPULACAO DE QUEUES */
Queue CreateQueue( int MaxElements ){
    Queue Q;

    if( MaxElements < MinQueueSize )
        Error( "Queue size is too small" );

    Q = malloc( sizeof( struct QueueRecord ) );
    if( Q == NULL )
        FatalError( "Out of space!!!" );

    Q->Array = malloc( sizeof( ElementType ) * MaxElements );
    if( Q->Array == NULL )
        FatalError( "Out of space!!!" );

    Q->Capacity = MaxElements+1;
    MakeEmptyQueue( Q );

    return Q;
}


void DisposeQueue( Queue Q ){
    if( Q != NULL ){
        free( Q->Array );
        free( Q );
    }
}

// Se o inicio e fim for igual esta vazia
int IsEmptyQueue( Queue Q ){
    return Q->Front == Q->Rear;
}

// Se o sucessor for onde é suposto entrar ta cheia
int IsFullQueue( Queue Q ){
    return successor(Q->Rear, Q) == Q->Front;
}

//igua a entrada e a saida
void MakeEmptyQueue( Queue Q ){
    Q->Front = Q->Rear;
}

// torna rear a proxima no insere no array
void Enqueue( ElementType X, Queue Q ){

    if(IsFullQueue(Q)){
        Error("Queue cheia!\n");
    }
    else{
    Q->Rear = successor(Q->Rear, Q);
    Q->Array[Q->Rear] = X;
    }
    
}



// retorna o array na zona de saida
ElementType Front( Queue Q ){


    if (IsEmptyQueue(Q)) {
        Error("Queue vazia!\n");
    }

    return Q->Array[successor(Q->Front, Q)];
}

//
ElementType Dequeue(Queue Q){
    if (IsEmptyQueue(Q)) {
        Error("Queue vazia!\n");
    }

    Q->Front = successor(Q->Front, Q);
    
    return Q->Array[Q->Front];
    
}