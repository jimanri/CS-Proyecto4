#include <stdio.h>
#include <assert.h>

int sumar_hasta(int N){
    int sum;
    sum = 0;
    while (N != 0){
        sum += N;
        N--;
    }
    printf("%d \n",sum);
    return 0;
}

int main(){
    int entrada;
    printf("dame una entrada \n");
    scanf("%d",&entrada);
    assert(entrada>=0);
    printf("la sumatoria es: \n");
    sumar_hasta(entrada);
    return 0;
}