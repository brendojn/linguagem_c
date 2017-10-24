#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
int vetor[10], vetor2[10], i, num, soma = 0, soma2 = 0, soma_final = 0;

srand(time(0));

//Populando o primeiro vetor com valores aleatórios
for(i = 0; i < 10; i++ ){
vetor[i] = rand() % 100;
}
//Mostrando o primeiro vetor
for(i=0;i<10;i++){
    printf("%d\n", vetor[i]);
}

printf("\n");

//Populando o primeiro vetor com valores aleatórios
for(i = 0; i < 10; i++ ){
vetor2[i] = rand() % 100;
}
//Mostrando o primeiro vetor
for(i=0;i<10;i++){
    printf("%d\n", vetor2[i]);
}


for(i=0;i<10;i++){
   soma = soma + vetor[i];
}

for(i=0;i<10;i++){
   soma2 = soma2 + vetor[i];
}

soma_final = soma + soma2;

printf("A soma e: %d", soma_final);
}


