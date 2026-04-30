//
//  balanco.c
//  stacks
//
//  Created by Ligia Ferreira on 22/02/2023.
//
#include <stdio.h>
#include "stackar.h"

int éParentesisAbrir(char t){
    if( t == '(' || t == '[' || t == '{')
    return 1;


   return 0;
}

int éParentesisFechar(char t){
    if( t == ')' || t == ']' || t == '}')
    return 1;


   return 0;
    
}

int concordam(char a, char b) {
    if (a == '(' && b == ')') return 1;
    if (a == '[' && b == ']') return 1;
    if (a == '{' && b == '}') return 1;
    return 0;
}

int verifica_balanco(char *exp) {

    Stack S = CreateStack(100); 

    for (int i = 0; exp[i] != '\0'; i++) {
        char atual = exp[i];

        if (éParentesisAbrir(atual)) {
            Push(atual, S);
        } 
        else if (éParentesisFechar(atual)) {
            if (IsEmpty(S)) {
                DisposeStack(S); 
                return 0; 
            }
            
            char topo = Top(S);
            if (concordam(topo, atual)) {
                Pop(S); 
            } else {
                DisposeStack(S);
                return 0; 
            }
        }
    }

    int resultado = IsEmpty(S);
    DisposeStack(S);
    return resultado;
}


int main(){
    char exp[]="{(())}";
    

    
    
    int x=verifica_balanco(exp);
    if(x==0)
        printf("A expresssão \"%s\" não está balanceada!\n",exp);
    else
        printf("A expressão \"%s\" está balanceada!\n",exp);
    
return 0;
    }
