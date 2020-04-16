#include <stdlib.h>
#include <stdio.h>
#define T 2
#define ORD 1
#define INV -1
#define INICIO -1

void inicializarArray(int [], int, int);
void cargarNumeros(int [], int tam);
float calcularPromedio(int [], int tam);
int calcularMaximo(int [], int tam);
void mostrarNumeros(int pepe[], int tam, int ord);
int menuUsuario(char texto[]);
int buscarLibre(int[], int, int);


/**
    minimos
    pares / impares
    positivos / negativos
    primos
    promedio negativos / positivos
    validaciones
*/
int main ()
{
  int numeros[T];

  int maximo;
  float promedio;

  int opcion;

  inicializarArray(numeros, T, INICIO);


  do
  {
      opcion = menuUsuario("1. Ingreso de numeros\n2.Promedio\n3.Maximo\n4.Mostrar ORD\n5.Mostrar INV\n10.Salir\nElija una opcion: ");

      switch(opcion)
      {

          case 1:
            cargarNumeros(numeros, T);
          break;
          case 2:
            promedio = calcularPromedio(numeros,T);
            printf("\nEl promedio es: %f", promedio);
          break;
          case 3:
            maximo = calcularMaximo(numeros,T);
            printf ("\nEl maximo es: %d\n", maximo);
          break;
          case 4:
            mostrarNumeros(numeros, T, ORD);
          break;
          case 5:
            mostrarNumeros(numeros, T, INV);
          break;

      }


  }while(opcion!=10);

  return 0;
}



void inicializarArray(int vector[], int tam, int valor)
{
    int i;

    for(i=0; i<tam; i++)
    {
        vector[i] = valor;
    }
}


int buscarLibre(int vector[], int tam , int valor)
{
     int i;
     int indice = -1;


    for (i = 0; i < tam; i++)
    {

        if(vector[i]==valor)
        {
            indice = i;
            break;
        }


    }

    return indice;
}

void cargarNumeros(int vector[], int tam)
{
    int i;
    int encontro;

    encontro = buscarLibre(vector,tam,-1);



    if(encontro!=-1)//si encontro lugar
    {

        printf ("Ingrese un numero: ");
        scanf ("%d", &vector[encontro]);
    }
    else
    {
        printf("\nEspacio agotado");
    }
}

float calcularPromedio(int vector[], int tam)
{
    int i;
    int acumuladorNumeros = 0;
    float promedio;

    for (i = 0; i < tam; i++)
    {
        if(vector[i]!=-1){
      acumuladorNumeros = acumuladorNumeros + vector[i];
        }
    }

    promedio = (float)acumuladorNumeros/i;

    return promedio;

}

int calcularMaximo(int vector[], int tam)
{
    int i;
    int maximo;


  for (i = 0; i < tam; i++)
    {
      if (vector[i] > maximo || i == 0)
    	{
    	  maximo = vector[i];
    	}
    }


    return maximo;

}

void mostrarNumeros(int vector[], int tam, int ord)
{
    int i;

    switch(ord)
    {
        case 1:
        for (i = 0; i < tam; i++)
        {

          printf ("%d\n", vector[i]);
        }

    break;
    case -1:
        for (i = tam -1; i >=0; i--)
        {

          printf ("%d\n", vector[i]);
        }

    break;


    }


}

int menuUsuario(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}




/**
#include <stdio.h>
#define T 10


void cargarNumeros(int [], int tam);
float calcularPromedio(int [], int tam);
int calcularMaximo(int [], int tam);
void mostrarNumeros(int pepe[], int tam);
void inicializarArray(int miArray[], int tam);
int CantidadDeCargados(int miArray[], int tam);
int SumaDeElementos(int miArray[], int tam);
int
main ()
{
  int numeros[T];

  int maximo;
  float promedio;

  inicializarArray(numeros, T);
  cargarNumeros(numeros, T);


  promedio = calcularPromedio(numeros,T);
  printf("\nEl promedio es: %f", promedio);

  maximo = calcularMaximo(numeros,T);

  printf ("\nEl maximo es: %d\n", maximo);

  mostrarNumeros(numeros, T);

  return 0;
}

int SumaDeElementos(int miArray[], int tam)
{
    int i;
    int AcumuladorDeCargados=0;
    for (i = 0; i < tam; i++)
    {
        if(miArray[i]!=-1)
        {
            AcumuladorDeCargados=AcumuladorDeCargados+miArray[i];
        }
    }
    return AcumuladorDeCargados;
}

int CantidadDeCargados(int miArray[], int tam)
{
    int i;
    int contadorDeCargados=0;
    for (i = 0; i < tam; i++)
    {
        if(miArray[i]!=-1)
        {
            contadorDeCargados++;
        }
    }
    return contadorDeCargados;
}
void cargarNumeros(int vector[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
      printf ("Ingrese un numero: ");
      scanf ("%d", &vector[i]);
    }
}

void inicializarArray(int miArray[], int tam){
    int i;
    for (i = 0; i < tam; i++)
    {
      miArray[i]=-1;
    }

}
float calcularPromedio(int vector[], int tam)
{

    int i;
    int acumuladorNumeros;
    int cantidadDeNumeros;
    float promedio;

    acumuladorNumeros=SumaDeElementos(vector,tam);
    cantidadDeNumeros=CantidadDeCargados(vector,tam);
    promedio = (float)acumuladorNumeros/cantidadDeNumeros;

    return promedio;

    //return  (float) SumaDeElementos(vector,tam)/CantidadDeCargados(vector,tam);


}

int calcularMaximo(int vector[], int tam)
{
    int i;
    int maximo;


  for (i = 0; i < tam; i++)
    {
      if (vector[i] > maximo || i == 0)
    	{
    	  maximo = vector[i];
    	}
    }


    return maximo;

}

void mostrarNumeros(int vector[], int tam)
{
    int i;
      for (i = 0; i < tam; i++)
    {

      printf ("%d\n", vector[i]);
    }

}



*/


