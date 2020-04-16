#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
Mostrar por pantalla el apellido y nombre de una persona, respetando el siguiente formato: "Scarafilo, Germán Ezequiel".
Tener en cuenta: apellido y nombre se ingresan en dos variables distintas que no pueden ser modificadas.
El ingreso de datos no tiene ningún formato en particular, es decir no se tiene en cuenta mayusculas o minusculas,
por lo que su programa deberá hacerlo para respetar el formato solicitado.

*/
void primeraLetraMayus(char []);
void catApellidoNombre(char[],char[]);
void llamadas(char [],char []);
int main()
{
    /**
    nombre = GerMAN ezeQuiel
    apellido= SCAraFIlo

    apellidoYnombre = Scarafilo, German Ezequiel.
    */

    char nombre[31] = "GerMAN ezeQuiel";
    char apellido[31] = "SCAraFIlo";

    llamadas(nombre,apellido);

    return 0;
}

void primeraLetraMayus(char cadena[]){
    char letra;
    char aux;
    int tam = 0;

    letra = toupper(cadena[0]);

    cadena[0] = letra;


    tam = strlen(cadena);
    for(int i= 0; i < tam; i++){
        if(cadena[i] == ' '){
            aux = toupper(cadena[i+1]);//En este caso que se que tiene separacion de un espacio

            cadena[i+1] = aux;
        }
    }
}

void catApellidoNombre(char Ap[],char Nb[]){
    strcat(Ap,", ");
    strcat(Ap,Nb);

    printf("Su Nombre es: %s\n",Ap);
}

void llamadas(char nombre[],char apellido[]){
    strlwr(nombre);
    strlwr(apellido);

    primeraLetraMayus(nombre);
    primeraLetraMayus(apellido);


    catApellidoNombre(apellido,nombre);
}
