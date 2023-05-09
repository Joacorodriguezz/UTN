#include <stdio.h>
#include <conio.h>

int main () {
    int nota1a,nota2a,nota3a,nota1b,nota2b,nota3b,nota1c,nota2c,nota3c,nota1d,nota2d,nota3d,nota1e,nota2e,nota3e,nota1f,nota2f,nota3f;
   
    /*NOTAS 1*/
    printf("Que nota le da a la maestra 1 \n");
    scanf("%d",&nota1a);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2a);
    printf("Ingrese la nota que le da a la maestra 3 \n");
    scanf("%d",&nota3a);
    /*NOTAS 2*/
 
    printf("Ingrese la nota que le da a la maestra 1 \n");
    scanf("%d",&nota1b);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2b);
    printf("Ingrese la nota que le da a la maestra 3\n");
    scanf("%d",&nota3b);
     /*NOTAS 3*/
    printf("Ingrese la nota que le da a  la maestra 1\n");
    scanf("%d",&nota1c);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2c);
    printf("Ingrese la nota que le da a la maestra 3 \n");
    scanf("%d",&nota3c);
     /*NOTAS 4*/
    printf("Ingrese la nota que le da a la maestra 1 \n");
    scanf("%d",&nota1d);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2d);
    printf("Ingrese la nota que le da a la maestra 3 \n");
    scanf("%d",&nota3d);
     /*NOTAS 5*/
    printf("Ingrese la nota que le da a la maestra 1 \n");
    scanf("%d",&nota1e);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2e);
    printf("Ingrese la nota que le da a la maestra 3 \n");
    scanf("%d",&nota3e);
     /*NOTAS 6*/
    printf("Ingrese la nota que le da a la maestra 1 \n");
    scanf("%d",&nota1f);
    printf("Ingrese la nota que le da a la maestra 2 \n");
    scanf("%d",&nota2f);
    printf("Ingrese la nota que le da a la maestra 3 \n");
    scanf("%d",&nota3f);
    /*MAESTRA 1*/
    float promedio1= (nota1a + nota1b + nota1c + nota1d + nota1e +nota1f)/6.0;
    float promedio2= (nota2a + nota2b + nota2c + nota2d + nota2e +nota2f)/6.0;
    float promedio3= (nota3a + nota3b + nota3c + nota3d + nota3e +nota3f)/6.0;
    
    printf("Las notas de la maestra 1 son: %d, %d, %d,%d, %d, %d ", nota1a, nota1b, nota1c, nota1d, nota1e, nota1f);
    printf("El promedio de la maestra 1 es: %f \n ", promedio1 );

    printf("Las notas de la maestra 2 son: %d, %d, %d,%d, %d, %d ", nota2a, nota2b, nota2c, nota2d, nota2e, nota2f);
    printf("El promedio de la maestra 2 es: %f \n ", promedio2 );

    printf("Las notas de la maestra 3 son: %d, %d, %d,%d, %d, %d ", nota3a, nota3b, nota3c, nota3d, nota3e, nota3f);
    printf("El promedio de la maestra 3 es: %f \n ", promedio3 );




return(0);


}
