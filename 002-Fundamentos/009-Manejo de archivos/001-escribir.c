#include <stdio.h>

int main (int argc,char *argv[]){
    
    FILE *archivo; //creo un archivo de tipo FILE y lo llamo archivo
    archivo=fopen("agenda.txt","w");//w modo escribir
    fprintf(archivo,"Esto es un texto \n");
    fclose(archivo);
    return 0;
}