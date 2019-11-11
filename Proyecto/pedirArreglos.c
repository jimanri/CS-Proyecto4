#include <stdio.h>
#define N 5

void pedirArreglo(int a[], int n_max){
    //cuenta desde 0 hasta n-max para que puedan meter de a uno los valores al array
    int i = 0;
    while (i < n_max){
        printf("ingrese el valor nro %d \n", i+1);
        scanf("%d", &a[i]);
        i++;
    }
}

void imprimeArreglo(int a[], int n_max){
    //cuenta desde 0 hasta n-max para imprimir el array
    int i = 0;
    while(i < n_max){
        printf("%d es %d \n", i+1, a[i]);
        i++;
    }

}

int main(){
    int a[N], n_max;
    n_max = N;
    pedirArreglo(a, n_max);
    imprimeArreglo(a, n_max);
    return 0;
}