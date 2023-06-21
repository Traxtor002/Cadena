#include "comparacion_cadenas.h"

int comparar_cadenas(const char *cadena1, const char *cadena2) {
    while (*cadena1 && (*cadena1 == *cadena2)) {
        cadena1++;
        cadena2++;
    }
    
    return *(unsigned char *)cadena1 - *(unsigned char *)cadena2;
}
