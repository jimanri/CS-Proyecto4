#include <stdio.h>
#define N 5

struct datos_t {
    int maximo;
    int minimo;
};

void pedirArreglo(int a[], int n_max){
    //cuenta desde 0 hasta n-max para que puedan meter de a uno los valores al array
    int i = 0;
    while (i < n_max){
        printf("ingrese el valor nro %d \n", i+1);
        scanf("%d", &a[i]);
        i++;
    }
}

/*me puse las gchi, linux kde, toy que */
struct datos_t loopeo(int a[], int tam){
    struct datos_t res = {a[0], a[0]};
    int i = 0;
    while(i<tam){
        if (a[i]< res.minimo){ //si a[i] es mas chico que el minimo, que lo reemplaze
            res.minimo = a[i];
        } else if (a[i]> res.maximo){ //si a[i] es mas grande qu el maximo, que lo reemplaze
            res.maximo = a[i];
        } else {
            ;
        }
    i++;    
    }
    return res;
}

int main(){
    int a[N];
    printf("hola, hoy vamos aver el minimo y maximo\n de una funcion \n");
    printf("Dame un arrgelo \n");
    //pedir arreglo
    pedirArreglo(a, N);

    //iniciar struct con a[0] como valores iniciales
    struct datos_t res = {a[0], a[0]};

    //while
    res = loopeo(a, N);
    //print resultados
    printf("Minimo es: %d, Maximo es: %d \n", res.minimo, res.maximo);
    return 0;
}