#include <stdio.h>

int main (int argc,char *argv[]){
    //multiples arreglos
    char* agenda [10][4];//10 entradas con 4 datos como maximo
    
    agenda[0][0]="Mickey ";
    agenda[0][1]="Mouse";
    agenda[0][2]="12345";
    agenda[0][3]="lovecats@gmail.com";
    
    agenda[1][0]="Minnie ";
    agenda[1][1]="Mouse";
    agenda[1][2]="54321";
    agenda[1][3]="hatecats@gmail.com";gcc
    
    printf("El correo del segundo registro de la agenda es: %s \n ",agenda[1][3]);
    
    return 0;
}