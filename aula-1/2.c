#include <stdio.h>

int main()
{
    int i;
    int *p;
    i = 10;
    p = &i;
    *p = 7;
    
    printf("valor de i = %d\n", i);
    printf("valor de p = %p\n", p);
    printf("endereco de  p = %p\n", &p);
    printf("\ni = %d\n", i);
    return 0;
}
