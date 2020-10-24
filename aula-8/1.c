#include <stdio.h>

void ex_3()
{
    int n,c=1;
    do
    {
        printf("DIGITE UM NUMERO INTEIRO: ");
        scanf("%d", &n);
        if(n<=0)
        {
            c=0;
        }
        else if(n%2==0)
        {
            printf("O NUMERO %d E PAR\n", n);
        }
        else
            printf("O NUMERO %d E IMPAR\n", n);
    }
    while(c!=0);
}
int main()
{
    return 0;
}