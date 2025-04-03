#include <stdio.h>
#include <stdlib.h>
///Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres.

 cantCarga (char array[],int cant );
 buscaCaracter (char array[], int validos);
 int main()
 {
     printf("CREANDO ARRAY EN MAIN\n");
     printf("---------------------\n");
     int cant = 7;
     int validos;
     int flag ;

     char array [] = {'a','b','c','d','e','f','g'};
     validos = cantCarga(array, cant);
     for (int e=0; e<validos ;e++)
     {
         printf ("%c\n", array[e]);
     }
     flag = buscaCaracter (array, validos);
     if (flag== 1)
     {
         printf ("el caracter se encuentra en el arreglo\n");
     }
     else printf ("el caracter no se encuentra en el arreglo\n");



     return 0;
 }

 int cantCarga (char array[], int cant )
 {
    char opcion='s';
     int validos=0;
     while (opcion=='s' && validos< cant)
     {
         printf ("cargar un caracter al arreglo...\n");
         fflush (stdin);
         scanf ("%c", &array[validos]);


         printf ("desea seguir ingresando datos? ... s/n \n");
         fflush (stdin);
         scanf ("%c",&opcion);
         validos++;
     }
     return validos;
 }

int buscaCaracter (char array[], int validos)
{
    char caractBuscado;
    int i = 0, flag= 0;
    printf ("ingrese el caracter a buscar \n");
    fflush(stdin);
    scanf ("%c", &caractBuscado);
while ( i<validos && caractBuscado!=array[i])
    {
        array[i];
        i++;
    }
if (caractBuscado==array[i])
{
    flag = 1;
}
else flag = 0;
return flag;
}
