#include <stdio.h>

int main()
{
    int * x; //pointeiro
    float * y; //ponteiro
    void * z; //ponteiro
    char * w; //ponteiro
    
    x = malloc (12); //a função malloc aloca um bloco/espaço na memória
    w = malloc (12); //o tamanho do espaço alocado pelo malloc é passado por parâmetro que quero
                    // ele devolve endereço inicial do bloco alocado/ generico void estrela 
                    //pra devolver o tipo certo usamos o casting
   x = (int *) malloc (12);
   w = (char *)  malloc (12);
   x = (int *) malloc (3 * sizeof(int));

return 0;
}
