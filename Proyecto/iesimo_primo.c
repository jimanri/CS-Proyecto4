#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int iesimo_primo(int N){
    int i, c;
    i = 1;
    c = 0;
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
        return 0;
    }
    
}

int main(){
    int entrada, r, c, i;
    c = 0;
    i = 1;
    printf("hola, dame una entrada \n");
    scanf("%d", &entrada);
    while(entrada < 0){
        printf("ERROR: ENTRADA DEBE SER POSITIVA, INTENTA DE NUEVO \n");
        printf("Nueva entrada: \n");
        scanf("%d", &entrada);
    }
    assert(entrada>=0);

    while (i<= 100) {
        if(iesimo_primo(i)){
            c++;
            r = iesimo_primo(i);
            printf("%d, %d \n",c, r);
        }
        if(c==entrada){
            break;
        }
        i++;
    }

    printf("El isimo primo es %d \n", r);
    return 0;
}