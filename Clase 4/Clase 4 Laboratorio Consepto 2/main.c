#include <stdio.h>
#include <stdlib.h>

/**
    Pilares de Funciones:
        1-Mantenibilidad.
        2-Reutilizacion.
        3-Depuracion.
        4-Independencia del Codigo.
*/

/**
-Alcance - Visibilidad Scoup
1 si es par o 0 si es impar
*/

/**Una Funcion Independiente*/
int esPar(void);
void mostrar();

int numero = 7; /** Variable Global*/

int main()
{
    /*
    int esVerdadero;

    printf("Ingrese un Numero: ");
    scanf("%d",&numero);


    esVerdadero = esPar();

    if(esVerdadero == 1){
        printf("\nEl numero es Par\n");
    }else{
        printf("\nEl numero es Impar\n");
    }

    */
    mostrar();
    printf("El numero es %d\n",numero);

    return 0;
}


void mostrar(){
    int numero;

    numero = 9;
    printf("Numero es %d\n",numero);

    /**
    una funcion() da como prioridad a las variables locales,
    si encuentra una y se llama como una global
    TIENE mayor PRECEDENCIA la local.
    */
}

/*
int esPar(void){
    int esVerdadero = 0;

    if(numero%2 == 0){
        esVerdadero = 1;
    }

    return esVerdadero;
}
*/

