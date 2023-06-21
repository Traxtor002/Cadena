#include <stdio.h>
#include "comparacion_cadenas.h"

int main() {
    char cadena1[100];
    char cadena2[100];
    
    printf("Ingresa la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    
    printf("Ingresa la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    
    int resultado = comparar_cadenas(cadena1, cadena2);
    
    if (resultado == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (resultado < 0) {
        printf("La primera cadena es menor que la segunda cadena.\n");
    } else {
        printf("La primera cadena es mayor que la segunda cadena.\n");
    }
    
    return 0;
}
