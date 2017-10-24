#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void geraV(int v[], int n, int
a, int b) {
int i;
    srand(time(0));
    for (i=0; i < n; i++)
    v[i] = (rand()%(b-a+1))+a;
    }

void imprimeV(int v[], int n){
int i;
    for(i=0; i < n; i++)
    printf(" [%2d] ",v[i]);
    printf("\n");
}
// Função principal chama as demais.
int main()
{
int v[10];
// Gera vetor com valores em [a,b].
geraV(v,10,1,6);
imprimeV(v,10);
}
