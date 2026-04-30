#include "stackar.h"
#include "fatal.h"
#include <stdlib.h>


#define EmptyTOS ( -1 )
#define MinStackSize ( 5 )


struct StackRecord
{
    int Capacity;
    int TopOfStack;
    ElementType *Array;
};



Stack CreateStack( int MaxElements )
{



	if( MaxElements < MinStackSize )
		Error( "Stack size is too small" );

	Stack S = malloc( sizeof( struct StackRecord ) );
	if( S == NULL )
		FatalError( "Out of space!!!" );

	S->Array = malloc( sizeof( ElementType ) * MaxElements );
	if( S->Array == NULL )
		FatalError( "Out of space!!!" );

	S->Capacity = MaxElements;
	MakeEmpty( S );

	return S;
}



void DisposeStack( Stack S )
{
    if( S != NULL )
    {
        free( S->Array );
        free( S );
    }
}


int IsEmpty( Stack S )
{
	return S->TopOfStack == - 1;
}


int IsFull( Stack S )
{
	return S->TopOfStack == S->Capacity - 1;
}


void MakeEmpty( Stack S )
{
	S->TopOfStack = -1;
}


void Push( ElementType X, Stack S )
{
	if(IsFull( S )){
		printf("Stack cheia\n");
	}
	else{
		S->TopOfStack++;
		S->Array[S->TopOfStack] = X;
	}
}


ElementType Top( Stack S )
{
	if(IsFull( S )){
		printf("Stack cheia\n");
	return 0;
	}

	return S->Array[ S->TopOfStack];


}


ElementType Pop( Stack S )
{
	if(IsFull( S )){
		printf("Stack cheia\n");
	return 0;
	}

	else{

		ElementType removido = S->Array[ S->TopOfStack];

		S->TopOfStack--;

		return removido;
	}
}