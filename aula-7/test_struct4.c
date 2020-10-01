#include <stdio.h>
#include <stdlib.h>

struct s4{
    int *vetor;
    int inteiro;
    char caracter;
};

int main(){
    struct s4 estruturas[10];

    struct s4 * ponteiro_s4;
    estruturas[0].caracter = 'a';
    estruturas[0].inteiro = 12;
    estruturas[0].vetor = (int *) malloc (20*sizeof(int));

    ponteiro_s4 = (struct s4 *) malloc (sizeof(struct s4));
    
    return 0;
}