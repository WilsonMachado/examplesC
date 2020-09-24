// Aquí queda explícita la diferencia entre un arreglo estático y dinámico

#include <stdio.h>
#include <stdlib.h>

int main(){
    // Tiempo de ejecución

    int n;     // Variable que determina la cantidad de elementos que tendrá el arreglo
    int i;     // Variable para el for

    float* p; // Declaro un puntero (para el arreglo dinámico)
    
    
    printf("Introduzca el numero de datos a ingresar: \n"); 
    
    scanf("%d", &n); // Solicito al usuario la cantidad de elementos del arreglo

    p = (float*) malloc(n*sizeof(float)); // Reservo la cantidad de de memoria para el arreglo
       
    // Después de aquí p se comporta literalmente como un arreglo. Para acceder a elementos del arreglo 
    // usar p[i], para acceder a la dirección de memoria del arreglo usar &p y para acceder a la dirreción
    // de memoria de un elemento del arreglo usar &p[i].

    for(i = 0; i < n; i++){               // Se introducen los datos
        printf("Introduzca el numero a ingresar: \n"); 

        scanf("%f", &p[i]); // Después de creado el arreglo, lo trabajo como una variable.
    }

    for(i = 0; i < n; i++){               // Se muestran los datos
        printf("El numero %d es: %.2f\n", i+1, p[i]);         
    }
    system("pause");
    return 0;
}