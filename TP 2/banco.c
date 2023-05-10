#include <stdio.h>

float costo_total; 
int precio_usd, cant_usd;

int main () {
    printf("Ingrese el valor del Dólar: ");
    scanf("%d", &precio_usd);
    printf("Ingrese la cantidad de dólares: ");
    scanf("%d", &cant_usd);
    costo_total = precio_usd * cant_usd;
    
    if (cant_usd < 501) {
        printf("El costo de la transacción es: %f\n", costo_total);
    } else if (cant_usd < 1501) {
        printf("El costo de la transacción es: %f\n", costo_total + costo_total * 0.02);
    } else if (cant_usd < 3501) {
        printf("El costo de la transacción es: %f\n", costo_total + costo_total * 0.025);
    } else {
        printf("El costo de la transacción es: %f\n", costo_total + costo_total * 0.04);
    }
    return 0;
}


    

