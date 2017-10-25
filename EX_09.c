#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[4][4], i, j, soma = 0;


    srand(time(0));

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            m[i][j] = rand() % 100;
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("[%2d]", m[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if((j == 3 - i))
            {
                soma += m[i][j];

            }
        }
    }
printf("A soma e: %d\n", soma);





}
