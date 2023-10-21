#include <stdio.h>
//las funciones tienen que estar declaradas antes de que las llame
int sumar(int op1,int op2){
    int operador1=op1;
    int operador2=op2;
    int suma= operador1 + operador2;
    return suma;
    }

int main (int argc,char *argv[]){
    printf("La suma es: %i \n", sumar(4,3));
    printf("La suma es: %i \n", sumar(2,3));
    printf("La suma es: %i \n", sumar(4,1));
    return 0;
    
    //con una unica funcion puedo llamar a los pasrametros tantas veces como quiera
}