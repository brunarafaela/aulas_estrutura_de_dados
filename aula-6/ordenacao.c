#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaração de funções:
void insertion_sort(int*, int);
void bubble_sort (int* , int);
void gera_vetor_randomico(int*, int);
mostra_vetor(int*, int);


int main(){
    int *v;
    int n;
    long int ini, fim;
    srand(time(0));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    v = (int *) malloc (n * sizeof(int));
    gera_vetor_randomico(v, n);
    mostra_vetor(v,n);
    ini = time(0);
    bubble_sort(v, n);
    fim = time(0);
    //printf("\nbubble demorou %1d segundos \n", fim - init);
    //mostra_vetor(v,n);
    return 0;
}

//função que recebe um vetor de tamanho n e devolve o vetor ordenado pelo Insertion
void insertion_sort(int v[], int n){
    int chave, i, j;
    for (i=1; i<n;i++){
        chave = v[i];
        j=i-1;
        while(j>=0 && v[j]>chave){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}
//função que receve um vetor de tamanho ne e devolve o vetor ordenado pelo Bubble
void bubble_sort(int v[], int n){
    int i, j, aux;
    for(i=1;j<n;j++){
        for(j=0;j<n-i;j++){
        if(v[j] >v[j+1]){
            aux =v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
        }
        mostra_vetor(v,n);
    }
    printf("---------\n");
}


