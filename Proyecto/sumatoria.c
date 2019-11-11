#include <stdio.h>
#define N 5

int sumatoria(int a[], int tam) {
    int i = 0, res = 0;
    
    while(i<tam) {
        res = res + a[i];
        i++;
    }
    return res; 
}

void pedirArreglo(int a[], int n_max){
    //cuenta desde 0 hasta n-max para que puedan meter de a uno los valores al array
    int i = 0;
    while (i < n_max){
        printf("ingrese el valor nro %d \n", i+1);
        scanf("%d", &a[i]);
        i++;
    }
}

int main() {
    int a[N], res;
    pedirArreglo(a, N);
    res = sumatoria(a, N);
    printf("la suma de los elementos es %d \n",res);
    return 0;
}