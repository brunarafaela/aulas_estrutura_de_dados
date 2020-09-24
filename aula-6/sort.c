#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//função que recebe um vetor de tamanho n e devolve o vetor ordenado pelo Insertion
void insertion_sort(int v[], int n){
    int chave, i, j;
    for (i=1; i<n;i++){
        chave = v[i];
        j=i-1;
        while(j>0 && v[j]>chave){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }

void bubble_sort(int v, int n){
    int i, j, aux;
    for(i=1;j<n;j++){
        if(v[j] >v[j+1]){
            aux =v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
    }
}
}