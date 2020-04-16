#include <stdio.h>
#include <stdlib.h>

/**
    Factorial
    Crear una función que permita calcular el factorial
    de un numero con una estructura repetitiva.
*/


int giveFactorial(int valorF);


int main()
{
    int valor;
    int facorial;

    printf("----- Factorial -----\n\n");
    printf("Ingrese un Valor: ");
    scanf("%d",&valor);

    facorial = giveFactorial(valor);

    printf("El factorial es: %d",facorial);

    return 0;
}


int giveFactorial(int valorF){
    int fact=1;

    for(int i = 1; i <= valorF; i++){
        fact = fact * i;
       // printf("Fac : %d\n",fact);
    }

    return fact;
}
