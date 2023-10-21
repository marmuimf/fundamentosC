#include <stdio.h>

int main (int argc,char *argv[]){
    //estructura de control de decision
    int diadelasemana=1;
    switch(diadelasemana){
        case 1:
            printf("Hoy es lunes \n");
            break;
            case 2:
            printf("Hoy es martes \n");
            break;
            case 3:
            printf("Hoy es miercoles \n");
            break;
    }
    return 0;
    
}