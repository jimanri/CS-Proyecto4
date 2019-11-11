#include <stdio.h>
#include <assert.h>
#define N 5

void intercambiar(int a[], int i, int j){
    int aux1, aux2;
    aux1 = a[i];
    aux2 = a[j];
    a[i] = aux2;
    a[j] = aux1;

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

void imprimeArreglo(int a[], int n_max){
    //cuenta desde 0 hasta n-max para imprimir el array
    int i = 0;
    while(i < n_max){
        printf("%d es %d \n", i+1, a[i]);
        i++;
    }

}


int main(){
    int i,j, a[N];
    printf("hola, dame un array \n");
    pedirArreglo(a, N);
    printf("dame un i: \n");
    scanf("%d",&i);
    printf("dame un j: \n");
    scanf("%d",&j);
    assert(i < N && j < N);

    intercambiar(a, i, j);
    printf("\n nuevo array: \n");
    imprimeArreglo(a, N);

    return 0;
}