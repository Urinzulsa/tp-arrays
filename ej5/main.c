#include <stdio.h>
#include <stdlib.h>
///Realizar una función que sume los elementos de un arreglo de números reales (float) de dimensión 100.
///(se recomienda hacer una función para cargar y otra para mostrar para este tipo de dato asociado al arreglo)

int cantCarga (array, cant);
void mostrarSuma (float array[], int i);
 int main()
 {
     printf("CREANDO ARRAY EN MAIN\n");
     printf("---------------------\n");
     int cant = 100;
     int i;
     float array [cant];

     i=cantCarga(array, cant);
     for (int e=0; e<i ;e++)
     {
         printf ("%.2f", array[e]);
     }

     mostrarSuma(array, i);

     return 0;
 }

 int cantCarga (float array[], int cant )
 {
    char opcion='s';
     int i=0;
     while (opcion=='s' && i < cant)
     {
         printf ("cargar un valor al arreglo...\n");
         scanf ("%f", &array[i]);

         printf ("desea seguir ingresando datos? ... s/n \n");
         fflush (stdin);
         scanf ("%c",&opcion);
         i++;
     }
     return i;
 }

 void mostrarSuma (float array[], int i)
 {
     float sumaValores=0;
     for (int e=0 ; e < i; e++)
     {
         sumaValores += array [e];
         printf ("suma valores\n");
     }
     printf ("%.2f", sumaValores);
 }
