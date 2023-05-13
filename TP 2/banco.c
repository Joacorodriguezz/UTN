
#include <stdio.h>
#include <conio.h>

int main() {
    float precio_ars, costo_total, com;
    int precio_usd, cant_usd;

    printf("Ingrese el valor del Dolar: ");
    scanf("%d", &precio_usd);
    printf("Ingrese la cantidad de dolares: ");
    scanf("%d", &cant_usd);
    costo_total = precio_usd * cant_usd;

    if (cant_usd < 501) {
        com = 0;
        precio_ars = costo_total;
    } else if (cant_usd <= 1501) {
        com = 0.02;
        precio_ars = costo_total + costo_total * com;
    } else if (cant_usd <= 3501) {
        com = 0.025;
        precio_ars = costo_total + costo_total * com;
    } else {
        com = 0.041;
        precio_ars = costo_total + costo_total * com;
    }

    printf("//////////////////////////////////////\n");
    printf("Se compraron: %d \n", cant_usd);
    printf("El valor de cada dolar es: %d \n", precio_usd);
    printf("La comision es: %f \n", com);
    printf("El costo total de la transaccion en ars es: %f \n", precio_ars);
    printf("//////////////////////////////////////");

    return 0;
}

