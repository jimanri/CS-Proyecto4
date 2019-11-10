#include <stdio.h>
#include <assert.h>

int sumar_hasta(int n){
    int sum;
    sum = 0;
    while (n != 0){
        sum += n;
        n--;
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