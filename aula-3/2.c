#include <stdio.h>
#include <stdlib.h>

void altera_parametro(int *a, float *z)
{                 //declaracao de ponteiro
    *a = *a + 10; //operador de referencia
    *z = *z + 1.7; //operador de referencia
}

int main(){
    int x=5, y=7;
    float w = 10.5;
    altera_paramtero(&x, &y); 
    return 0;
}




