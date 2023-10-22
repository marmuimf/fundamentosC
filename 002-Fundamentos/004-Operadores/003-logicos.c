#include <stdio.h>

int main (int argc,char *argv[]){
   //permiten comparar grupos de elementos
    
    printf("dime si es cierto: %i \n",(4>3 && 3>2 && 2>1));
    printf("dime si es cierto: %i \n",(4>3 && 3>2 && 2>2));
   
    //operador or ||
    printf("dime si es cierto: %i \n",(4>3 || 3>2 || 2>1));
    printf("dime si es cierto: %i \n",(4>3 || 3>2 || 2>2));
    printf("dime si es cierto: %i \n",(4>3 || 3>3 || 2>2));
    printf("dime si es cierto: %i \n",(4>4 || 3>3 || 2>2));
   
    return 0;
}