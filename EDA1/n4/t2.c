#include <stdio.h>
#include "stackar.h"
#include "queue.h"

int main(){
    
    Queue Q = CreateQueue(10);

    int x = 123;
    while(x > 0){
        Enqueue(x % 10, Q);
        x = x/10;
    }
    while (!IsEmptyQueue(Q))
    {
        printf("%d", Dequeue(Q));
    }
    printf("\n");
    
}