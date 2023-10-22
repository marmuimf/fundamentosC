#include <stdio.h>

int sumar(int op1,int op2){
    int operador1=op1;//intermediario innecesario
    int operador2=op2;
    int suma= operador1 + operador2;
    return suma;
    }

int main (int argc,char *argv[]){
    printf("La suma es: %i \n", sumar(4,3));
    printf("La suma es: %i \n", sumar(2,3));
    printf("La suma es: %i \n", sumar(4,1));
    return 0;
    
    //una unica funcion reutilizable para diferentes parametros
}