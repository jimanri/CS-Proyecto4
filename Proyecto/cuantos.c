#include <stdio.h>
#include <assert.h>
#define N 5

struct comp_t {
    int menores;
    int iguales;
    int mayores;
};

struct comp_t f(int a[], int tam, int ref){
    struct comp_t res = {0,0,0};
    int i = 0;
    while(i<tam){
        printf("%d \n",a[i]);
        if(a[i]<ref){
            res.menores++;
        }
        else if(a[i] > ref){
            res.mayores++;
        } else if(a[i] == ref) {
            res.iguales++;
        }
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

int main(){
    struct comp_t resa = {0,0,0};
    int a[N], referencia = 0;
    printf("Hola, dame un punto de referencia \n");
    scanf("%d", &referencia);
    printf("dame un array\n");
    pedirArreglo(a, N);
    resa = f(a, N, referencia);
    printf("menores: %d , mayores: %d , iguales: %d \n\n",resa.menores, resa.mayores, resa.iguales);
    return 0;
}