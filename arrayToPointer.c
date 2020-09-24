#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;


    int arr[] = {1,24,37};
    int* p;

    p = arr;

    p[0] = 5; // Al modificar un valor de P los cambios se ven inmediatamente en Arr, porque son la misma vaina

    printf("The P's address is: %x\n\n", &p); // Dirección de memoria de P
 
    printf("The array's address is: %x\n\n", &arr); // DIrección de memoria del arreglo

    for(i = 0; i < 3; i++){ // Dirección de memoria de los elementos de P
        printf("The P's element %d address is: %x\n", i+1, &p[i]); 
    }

    printf("\n\n");

    for(i = 0; i < 3; i++){

        printf("The array's element %d address is: %x\n", i+1, &arr[i]); // Dirección de memoria de los elementeos del arreglo
    }

    printf("\n\n");

    system("pause");
    return 0;

} 