#include <stdio.h>
#include <stdlib.h>

#include "funcs.c"
#include "funcs.h"

int main(){
   
   int i;

   int cantidadDatos;
   double* p;

   double resultado;

   printf("Ingrese la cantidad de datos:\n");

   scanf("%d", &cantidadDatos);

   p = (double*)malloc(cantidadDatos*sizeof(double));

   for(i = 0; i < cantidadDatos; i++){

       printf("Ingrese el dato %d:\n", i+1);
       scanf("%lf", &p[i]);
   }

   resultado = suma(p, &cantidadDatos);

   printf("El resultado de la suma de los datos es %.2f\n", resultado);

   system("pause");
   return 0;
   
   }