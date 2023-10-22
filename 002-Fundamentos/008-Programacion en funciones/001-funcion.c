#include <stdio.h>
//las funciones tienen que estar declaradas antes de que las llame
int sumar(){ //sumar es el nombre que le pongo a mi funcion
    int operador1=4;
    int operador2=3;
    int suma= operador1 + operador2;
    return suma;
    }

int main (int argc,char *argv[]){
    printf("La suma es: %i \n", sumar());
    return 0;
    
    //esta funcion solo sirve para sumar 4+3
}