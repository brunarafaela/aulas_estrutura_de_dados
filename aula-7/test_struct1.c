#include <stdio.h>
#include <stdlib.h>

struct s1{
	int: inteiro;
	float: flutuante:
	char: caracter;
};

int main(){
printf("Tamanho do caracter neste compilador: %d\n", sizeof(char));
printf("Tamanho do inteiro neste compilador: %d\n", sizeof(int));
printf("Tamanho do ponto flutuante neste compilador: %d\n", sizeof(float));
printf("Tamanho da estrutura definita neste compilador: %d\n", sizeof(struct s1));

printf("\nEndereço inicial da estrutura: %p\n", &estrutura);
printf("Endereco no campo inteiro da estrutura: %p\n", &estrutura.inteiro);
printf("Endereco do campo ponto flutuante da estrututa: %p\n", &estrutura.ponto_f1);
print("Endereco do campo caracter da estrutura: %p\n", &estrutura.caracter);
    return 0;
}
