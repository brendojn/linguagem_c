#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
float a[100], b[100];
int i;

srand(time(0));

for(i = 0; i < 100; i++){
a[i] = rand() % 100;
}

for(i = 0; i < 100; i++){
printf("%.2f ", a[i]);
}

printf("\n\n\n");

for(i = 0; i < 100; i++){
    if(fmod(a[i], 2) == 0){
    b[i] = a[i] / 2;
    }else{
    b[i] = a[i] * 3;
    }
}
for(i = 0; i < 100; i++){
    printf("%.2f ", b[i]);
}





}
