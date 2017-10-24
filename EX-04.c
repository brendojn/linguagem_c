#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int vetor[10], i, maior = 0, menor = 100000000000, posicao_maior = 0, posicao_menor = 0;

srand(time(0));

for(i = 0; i < 10; i++){
vetor[i] = rand() % 100;
}

for(i = 0; i < 10; i++){
printf("%d ", vetor[i]);
}

printf("\n\n");

for(i = 0; i < 10; i++){

if(vetor[i] > maior){
    maior = vetor[i];
    posicao_maior = i + 1;
}
if(vetor[i] < menor){
    menor = vetor[i];
    posicao_menor = i + 1;
}
}

printf("O menor valor e: %d e sua posicao e: %d\n", menor, posicao_menor);
printf("O maior valor e: %d e sua posicao e: %d", maior, posicao_maior);

}

