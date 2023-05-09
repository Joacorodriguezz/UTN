#include <stdio.h>

#define uso_pc 10;
#define hoja 15;
#define recargo 5;
int minutos,cant_hojas;

int main(){
    printf("Ingrese los minutos que el cliente utilizo la PC");
    scanf("%d", &minutos);
    printf("Ingrese las hojas impresas por el cliente");
    scanf("%d", &cant_hojas);

    printf("RECIBO DE USO \n");
    int tiempo= minutos * uso_pc ;
    printf("Cargo por cantida de uso de la pc %d",tiempo);

    float seguro = (minutos * 0.01) * recargo;
    printf("Cargo por seguro: %f \n" , seguro);

    int fotocopias= cant_hojas * hoja;
    printf("Precio por las hojas impresas:%d",fotocopias);
    
    float total= tiempo + seguro + fotocopias;
    printf("El total es:%f",total);

    return(0);

}