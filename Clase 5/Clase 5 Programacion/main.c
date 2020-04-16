#include <stdio.h>
#define T 10

int main()
{
  int numeros[T];
  int aux;
  int posicion;
  int i;
  char seguir;
  int acumuladorNumeros = 0;
  int maximo;
  float promedio;

  /*secuencial




     for(i=0; i<T; i++)
     {
     numeros[i]=-1;
     }

     /*do
     {

     printf("Ingrese un numero: ");
     scanf("%d", &aux);
     printf("Ingrese la posicion: ");
     scanf("%d", &posicion);

     numeros[posicion-1] =aux;


     printf("Desea continuar? s/n");
     __fpurge(stdin);
     scanf("%c", &seguir);

     }while(seguir=='s'); */



  for (i = 0; i < T; i++)
    {
      printf ("Ingrese un numero: ");
      scanf ("%d", &numeros[i]);

    }

  for (i = 0; i < T; i++)
    {
      acumuladorNumeros = acumuladorNumeros + numeros[i];
    }

  printf ("\nEl total acumulado es: %d", acumuladorNumeros);
  promedio = (float)acumuladorNumeros/T;
  printf("\nEl promedio es: %f", promedio);



  for (i = 0; i < T; i++)
    {
      if (numeros[i] > maximo || i == 0)
    	{
    	  maximo = numeros[i];
    	}
    }




  printf ("\nEl maximo es: %d\n", maximo);





  for (i = 0; i < T; i++)
    {

      printf ("%d\n", numeros[i]);
    }







  return 0;
}



    /*
    int numeros[T];
    int aux;
    int posicion;
    int i;
    char seguir;

    /** //secuencial


    for(i=0; i<T; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }*//*

    for(i=0; i<T; i++)
    {
        numeros[i]=-1;
    }


   do
    {

        printf("Ingrese un numero: ");
        scanf("%d", &aux);
        printf("Ingrese la posicion: ");
        scanf("%d", &posicion);

        numeros[posicion-1] =aux;


        printf("Desea continuar? s/n");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir=='s');


    for(i=0; i<T; i++)
    {
        if(numeros[i]!=-1)
        {
            printf("%d\n", numeros[i]);
        }


    }
*/

    return 0;
}

