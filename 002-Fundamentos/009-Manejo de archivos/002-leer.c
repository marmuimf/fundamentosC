#include <stdio.h>

int main (int argc,char *argv[]){
    char cadena[100];//100 caracteres maximo
    FILE *archivo; //creo un archivo de tipo FILE y lo llamo archivo
    archivo=fopen("agenda.txt","r");//r modo leer
    while(fgets(cadena, 100, archivo)!=NULL){
        puts(cadena);
    }
    fclose(archivo);
    return 0;
    //leer archivo de texto y recuperar contenido
}