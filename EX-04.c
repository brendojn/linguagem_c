#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int vetor[10], i, maior, menor;

srand(time(0));

for(i = 0; i < 10; i++){
vetor[i] = rand() % 100;
    maior = vetor[0];
    menor = vetor[0];
if(vetor[i] > maior){
    maior = vetor[i];
}
if(vetor[i] < menor){
    menor = vetor[i];
}
}
printf("O menor valor e: %d\n", menor);
printf("O maior valor e: %d", maior);
}


