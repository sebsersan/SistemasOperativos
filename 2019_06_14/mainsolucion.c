#include "solucion.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char** argv) {
  int x = 20;
  pid_t pid; 
	
  pid = fork();
 if(pid==0){	  
   x = fibonacci(x);
   guardarEntero("archivo",x);
 }
 else{
   pid = wait(NULL);  
   int valor =   leerEntero("archivo");
   valor = valor * 100;
   printf("El valor del fibonacci multiplicado por 100 es: %d\n", valor);
 }

  

  return 0;
}
