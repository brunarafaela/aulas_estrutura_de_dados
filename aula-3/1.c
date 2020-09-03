#include <stdio.h>
#include <stdlib.h>

int maior_2 (int a, int b){

    return a>b? a:b;
}

int soma_vetor(int v, int n){
    int i, s = 0;
    for(i=0; i<n; i++){
        s+= v[i];    
    }
    return s;
}

int main(){
    int x=5, y=7;
    int v1[3] = {3,5,6};
    int v2[5] = {2,4,6,7,5};

    int n1= maior_2(x,y);
    printf("maior entre %d e %d: %d\n", x, y, n1);

    return 0;
}




