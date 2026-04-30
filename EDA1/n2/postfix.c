#include <stdio.h>
#include "stackar.h"
#include <ctype.h>

int abrir(int x){
    if(x == '(')
    return 1;

    return 0;
}
int fechar(int x){
    if(x == ')')
    return 1;

    return 0;
}

int prioridade(int obj){
    if(obj == '*' || obj == '/') return 2;
    if(obj == '+' || obj == '-') return 1;
    return 0;
}

void infixaParaPosfixa(char *exp){
    Stack S = CreateStack(100);
    int i;

    for(i = 0; exp[i] != '\0'; i++){
        char atual = exp[i];

        if(isalnum(atual)){
            printf("%c", atual);
        }
        else if(abrir(atual)){
            Push(atual, S);
        }
        else if(fechar(atual)) {
            while (!IsEmpty(S) && Top(S) != '(') {
                printf("%c", Pop(S));
            }
            if(!IsEmpty(S)) Pop(S); 
        }
        else { 
            while (!IsEmpty(S) && prioridade(Top(S)) >= prioridade(atual)) {
                printf("%c", Pop(S));
            }
            Push(atual, S);
        }
    }

    while (!IsEmpty(S)) {
        printf("%c", Pop(S));
    }
    
    DisposeStack(S);
}

int main() {

    char exp1[] = "A*B+C"; 
    infixaParaPosfixa(exp1);
    printf("\n");
    char exp2[] = "(A+B)*C";
    infixaParaPosfixa(exp2);    printf("\n");
    printf("\n");
    char exp3[] = "A+B*C+(D*E+F)*G";
    infixaParaPosfixa(exp3);
    printf("\n");
    return 0;
}