#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int m[5], i;
float p[5], f[5], fat_final = 0;

for(i = 0; i < 5; i++){
  printf("Digite a quantidade da mercadoria %d: ", i + 1 );
  scanf("%d", &m[i]);
}
printf("\n\n");

for(i = 0; i < 5; i++){
  printf("Digite o preco da mercadoria %d: ", i + 1);
  scanf("%f", &p[i]);
}

for(i = 0; i < 5; i++){
    f[i] = m[i] * p[i];
}

for(i = 0; i < 5; i++){
    fat_final = fat_final + f[i];
}
printf("O faturamento e: %f ", fat_final);
}
