#include <stdio.h>

int main(){
    int a,b;
    float x;
    scanf("%d%d", &a, &b);
    scanf("%f", &x);
    printf("a = %d\nb = %d\nx = %.2f\n", a, b, x);
    return 0;
}