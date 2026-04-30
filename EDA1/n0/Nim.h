//
//  Nim.h
//  hello-26
//
//  Created by Ligia Ferreira on 09/02/2026.
//


struct NimGame;
typedef struct NimGame *Nim;

Nim novoJogo(int numPilhas, char *jog1, char *jog2);
void retira (Nim ng, int nQuantas, int nPilha );
void printJogo(Nim j);
void jogar(Nim j);




