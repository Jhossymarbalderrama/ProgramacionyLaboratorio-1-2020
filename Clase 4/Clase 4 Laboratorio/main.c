#include <stdio.h>
#include <stdlib.h>

/**
    Pilares de Funciones:
        1-Mantenibilidad.
        2-Reutilizacion.
        3-Depuracion.
        4-Independencia del Codigo.
*/

/** 1 si es par o 0 si es impar */

/**Una Funcion Independiente*/
int esPar(int numero);

int main()
{
    int esVerdadero;
    int numero;

    printf("Ingrese un Numero: ");
    scanf("%d",&numero);


    esVerdadero = esPar(numero); /** parametro actual (en el llamado) */

    if(esVerdadero == 1){
        printf("\nEl numero es Par\n");
    }else{
        printf("\nEl numero es Impar\n");
    }

    return 0;
}
/** Parametro Formal (en la Funcion)
    Pasaje de parametros por valor
*/
int esPar(int numero){
    int esVerdadero = 0;

    if(numero%2 == 0){
        esVerdadero = 1;
    }

    return esVerdadero;
}
