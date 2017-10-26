#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a[10], i, valor, achou = 0, posicao;

    for(i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Digite um valor para verificar: ");
    scanf("%d", &valor);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == valor)
        {
            achou = 1;
            posicao = i + 1;
        }
    }
    if(achou)
    {
        printf("A posicao e: %d", posicao);
    }
    else
    {
        printf("Chave %d nao encontrada", valor);
    }

}
