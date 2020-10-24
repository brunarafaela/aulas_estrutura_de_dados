#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//declaração das funções: protótipos das funções
void selection_sort(int *, int);
void gera_vetor_randomico (int *, int);
void mostra_vetor (int *, int);

int main () {
    int *v;
    int n, ini, fim;
    float tempo;
    srand(time(0));
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    v = (int *) malloc (n * sizeof(int));
    gera_vetor_randomico(v, n);
    printf ("\nVetor original:\n");
    mostra_vetor(v, n);
    ini = time(0);
    selection_sort(v, n);
    fim =  time(0);
    printf ("\nVetor ordenado:\n");
    mostra_vetor(v,n);
    tempo = fim-ini;
    printf("\nSelection sort demorou %lf segundos\n", tempo);
    return 0;
}

//função que recebe um vetor de tamanho n e devolve o vetor ordenado pelo Selection
void selection_sort (int v[], int n) {
    int i, j, m, a;
       for (i = 0; i < (n-1); i++) {
        m = i;
        for (j = (i+1); j < n; j++) {
            if(v[j] < v[m]) m = j;
        }
        if (v[i] != v[m]) {
            a = v[i];
            v[i] = v[m];
            v[m] = a;
        }
    }
}

//função que recebe um vetor de tamanho n e devolve o vetor ordenado pelo Insertion
void insertion_sort (int v[], int n) {
    int chave, i, j;
    for (i=1; i<n; i++) {
        chave = v[i];
        j=i-1;
        while (j>=0 && v[j]>chave) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = chave;
    }
}


//função que recebe um vetor de tamanho n e devolve o vetor ordenado pelo Bubble
void bubble_sort (int v[], int n) {
    int i, j, aux;
    for (i=1; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (v[j] > v[j+1]) {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void gera_vetor_randomico (int v[], int n) {
    int i;
    for (i=0; i<n; i++) {
        v[i] = rand();
    }
}

void mostra_vetor (int v[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf ("%d ", v[i]);
    }
    printf ("\n");
}


