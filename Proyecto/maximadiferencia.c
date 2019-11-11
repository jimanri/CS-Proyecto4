#include <stdio.h>
#include <assert.h>
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

int max(int a, int b) {
    if(a>=b) {
        return a;
    } else {
        return b;
    }

}

int absoluto(int a) {
    if
}

int maxdif(int a[], int tam){
    int n, r, s;
    n = 2;
    r = a[0] - a[1];
    s = max (a[0], a[1]);

    while(n != tam) {
        r = max(r, (s - a[n]));
        s = max(s, a[n]);
        n++;
    }

    return r;
}

int main(){
    int a[N], difer;
    printf("Hola, hoy vamos a ver la mayor diferencia\nentre dos numeros en un array\n");
    printf("dame un arreglo! \n");
    pedirArreglo(a, N);
    difer = maxdif(a, N);
    printf("El resultado final es: %d \n", difer);
    return 0;
}