double suma(double* arr, int* lenArr){

    double aux = 0;
    int i;

    for(i = 0; i < (*lenArr); i++){
        aux += arr[i];
    }

    return aux;

}