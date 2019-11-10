#include <stdio.h>
#include <assert.h>

struct Div_t
{
    int cociente;
    int resto;
};


int main(){
    int x,y;
    struct Div_t res = {0, 0};

    printf("Valores a dividir: \n");
    printf("Dividendo: \n");
    scanf("%d",&x);
    printf("divisor: \n");
    scanf("%d", &y);
    while(y==0){
        printf("NO PODES DIVIDIR POR 0 LOCO! \n");
        printf("Proba de nuevo: \n");
        scanf("%d", &y);
    }

    assert(x>=0 && y >0);
    res.cociente = x/y;
    res.resto = x%y;

    printf("Cociente: %d, Resto: %d \n", res.cociente, res.resto);
    return 0;
}