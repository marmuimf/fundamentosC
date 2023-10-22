#include <stdio.h>

int main (int argc,char *argv[]){
    
    //persitencia de datos
    
    FILE *archivo; //creo un archivo de tipo FILE y lo llamo archivo
    archivo=fopen("agenda.txt","w");//w modo escribir, se crea un archivo agenda.txt
    fprintf(archivo,"Esto es un texto \n");
    fclose(archivo);
    return 0;
}