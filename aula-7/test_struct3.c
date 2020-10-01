#include <stdio.h>
#include <stdlib.h>

struct s3{
    int *vetor;
    int inteiro;
    char character;
};

int main(){
    struct s3 estrutura;
    printf("tamanho do \"vetor\" neste compilador: %d\n", sizeof(estrutura.vetor));
    printf("tamanho da estrutura definida: %d\n", sizeof(struct s3));
    printf("\ndepois da alocacao dinamica:\n");
    

    return 0;
}