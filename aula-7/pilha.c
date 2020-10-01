#include <stdio.h>
#include <stdlib.h>

typedef struct pilha1{
    int topo; //controle da pilha
    int datos[10]; //container da pilha
}t_pilha1;

typedef struct {
    int topo;
    int * dados;
}t_pilha;


void push (t_pilha *, int);
int pop (t_pilha *);
int pilha_cheia (const t_pilha *);
int pilha_vazia(const t_pilha *);//se o topo for 0, a pilha ta vazia

int main(){
    struct pilha1 p1;

    t_pilha1 p3;
    t_pilha p4;
    return 0;
}