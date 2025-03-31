#include <stdio.h>
#include <stdlib.h>

///Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y
 ///los muestre por pantalla.

 int cantCarga (array);
 int main()
 {
     printf("CREANDO ARRAY EN MAIN\n");
     printf("---------------------\n");
     int i, array [10]={};

     i=cantCarga(array);
     printf ("-------------------\n");
     printf ("%d valores cargados\n", i);
     printf ("-------------------\n");
     printf ("valores cargados dentro...\n");
     for (int e=0 ; e<i ; e++)
    {
     printf ("%d\n", array[e]);
    }

     return 0;
 }

 int cantCarga (int array[] )
 {
     char opcion='s';
     int i;
     i=0;
     while (opcion=='s' && i < 10)
     {
         printf ("cargar un valor al arreglo...\n");
         scanf ("%d", &array[i]);
         i++;
         printf ("desea seguir ingresando datos? ... s/n \n");
         fflush (stdin);
         scanf ("%c",&opcion);
     }
     return i;
 }
