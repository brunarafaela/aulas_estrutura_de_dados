#include <stdio.h>
#include <conio.h>

void bubbleSort(int *vetor, int tamanho){
	int aux, i, j;
	
	printf("%i\n",tamanho);
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}


int main(void) {
	 int t[] = {3,7,8,2,1,9,23,6,12,8,4,1};
	 int tamanho = sizeof(t)/sizeof(int);
	  bubbleSort(&t, tamanho);
	 int x =0;
	 for(x=0; x<tamanho; x++){
	    printf("%i\n", t[x]);    
	 }
	 getch(); 
}
