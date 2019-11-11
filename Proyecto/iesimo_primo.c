#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int iesimo_primo(int N){
    int i, c;
    i = 1;
    c = 0;
    //este loop se fija si el n que nos dan es primo
    while (i < N) {
        if (N%i == 0) {
            c++;
        }
    i++;
    }
    if(c==1){
        return N; 
    }
    else
    {
        return 0; //devuelve 0 para que el if() de abajo ande.
    }
    
}

int main(){
    int entrada, r, c, i;
    c = 0; //contador de primos, o sea, en que primos estamos
    i = 1;
    printf("hola, dame una entrada \n");
    scanf("%d", &entrada);
    while(entrada < 0){
        printf("ERROR: ENTRADA DEBE SER POSITIVA, INTENTA DE NUEVO \n");
        printf("Nueva entrada: \n");
        scanf("%d", &entrada);
    }
    assert(entrada>=0);
    //notar que los primos empiezan en 2
    //ponemos este while para que no se haga infinito
    while (i<= 100) {
        //cada vez que encuentre un primo, suma 1 al contador y hace que el resultado sea ese primo
        if(iesimo_primo(i)){ 
            c++;
            r = iesimo_primo(i);
            printf("%d, %d \n",c, r);
        }
        //si el contador es igual a la entrada, ese es nuestro primo.
        if(c==entrada){
            break;
        }
        i++;
    }
    //imprime el iesimo primo
    printf("El isimo primo es %d \n", r);
    return 0;
}