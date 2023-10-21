#include <stdio.h>
#include <string.h>//importamos libreria string para hacer operaciones con cadenas de caracteres

int main (int argc,char *argv[]){
    
    char nombre[]="Mickey ";
    char apellidos[]="Mouse";
    
    strcat(nombre, apellidos);//concateno
    printf("Mi nombre es: %s", nombre);
    
    
   
    return 0;
}