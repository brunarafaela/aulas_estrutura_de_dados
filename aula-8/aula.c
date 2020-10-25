#include <stdio.h>

//bruna

// int fat(int i){
//     if(i==0 || i==1)
//     return 1;
//     return i*fat(i-1);
// }

int fib(int n){
    if(n==0 || n==1)
    return 1;
    return fib(n-2) + fib(n-1);
}

int soma_v_it(int v[], int n){
    int i,s;
    for (i=0, s=0;i<n;i++){
        s+=v[i];
    }
    return s;
}

int soma_v_rec1(int v[], int i, int n){
    if (i==n ){
        return 0;
    }
    return v[i] + soma_v_rec1(v, i+1, n);
}

int soma_v_rec2(int v[], int i){
    if (i==0){
        return v[0];
    }
    return v[i]+ soma_v_rec2 (v, i-1);
}


//Escrever uma função recursiva que:
// 1 recebe um inteiro n e exibe os inteiros de 0 a n em ordem crescente
// 2 recebe um inteito n e exibe os pares de 0 a n em ordem decrescente
void num_rec_mac(int n, int i){ //recursão de cauda
    printf("%d", i);
    if(i<n){
        num_rec_mac (n, i+1);
    }
}

void fun_rec2(int n){
    if(n%2){
        n--;
        printf("%d ,", n);
    }
    if(n){
        func_rec2(n-2);
    }
}

int main()
{
    int v, n, i;
    // for (i=0; i<42; i++){
    //   printf("\nFibonacci de %d: %d\n", i, fib(i));
    // }
    // printf("%d", soma_v_rec1(v,0,n));
    printf("%d", soma_v_rec2(v, n-1));
        return 0;
}