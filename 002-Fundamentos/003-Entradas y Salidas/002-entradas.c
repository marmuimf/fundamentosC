#include <stdio.h>

int main (int argc,char *argv[]){
    //entrada
    printf("Elige un nr entre 0 y 9:");
    char numero = getchar();
    //salida
    printf("El caracter que has seleccionado es: %c \n", numero);
    return 0;
}