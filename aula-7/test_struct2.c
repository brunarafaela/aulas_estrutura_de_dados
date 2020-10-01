#include <stdio.h>
#include <stdlib.h>

struct s2{
	int inteiro;
	float flutuante;
    int vetor[10];
};

int main(){

struct s2 estrutura;

printf("Tamanho do vetor neste compilador: %d\n", sizeof(estrutura.vetor));
printf("Tamanho da estrutura definita neste compilador: %d\n", sizeof(struct s2));

printf("\nEndereço inicial da estrutura: %p\n", &estrutura);
printf("Endereco no campo inteiro da estrutura: %p\n", &estrutura.inteiro);
print("Endereco do campo caracter da estrutura: %p\n", &estrutura.caracter);
    return 0;
}
