#include <stdio.h>

/*declaracion de main
declaracion de variables
mostrar argc
mostrar nombre de la llamada
bucle para mostrar resto de argumentos

modificadores de printf()
  
  %c carácter
  %d número entero
  %s cadena o string*/
  
  int main(int argc, char *argv[]){
    int i;
    /*declaracion de variables */
    print("El número de argumentos es %d\n",argc);
    printf("Se le ha llamado con %s\n",argv[0]);
    for(i=1; i<argv;i++){
      printf("el argumento es %s\n",i,argv[i]);
    }
    
    /*Mostrar nombre de la llamada*/
    /*bucle para mostrar resto de argumentos*/
    return 0;
  }
/*Modificadores de printf()*/

/*%c caracter
  %d numero o entero
  %s cadena o string*/
