#include <stdio.h>
#include <stdbool.h>
#define N 5

bool existe_positivo(int a[], int tam){
    int i = 0, c = 0;
    while(i<tam){
        if(a[i]>0){
            c++;
            break;
        }
        else{
            ;
        }
    i++;
    }
    return c;
}

bool todos_positivos(int a[], int tam){
    int i = 0, c = 1;
    while(i<tam){
        if(a[i]<=0){
            c--;
            break;
        }
        else {
            ;
        }
    i++;
    }
    return c;
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
    int a[N], selec = 1, r = 0;
    pedirArreglo(a, N);
    printf("opciones: \n");
    printf("1) ver si existe un positivo en el array \n");
    printf("2) ver si todos son positivos en el array \n");
    printf("Respuesta: \n");
    scanf("%d", &selec);
    if (selec == 1){
        r = existe_positivo(a, N);

    } else {
        r = todos_positivos(a, N);
    }
    if (r){
        printf("verdadero\n");
    } else {
        printf("falso\n");
    }
    return 0;
}