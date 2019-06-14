#include <unistd.h>
#include <stdio.h>
/**
Este programa en C debe imprimir lo siguiente

Soy el hijo y mi identificador es 34567
Soy el padre, mi identificador es 34566 y el de mi hijo es 34567
*/

int main(int argc, char** argv) {
 	pid_t pid;
 
	pid = fork();
	if(pid==0){
          printf("Soy el hijo y mi idetificador es %d \n", getpid());
	}
	else {
	  printf("Soy el padre, mi idetificador es %d y el de mi hijo es %d\n"
	, getpid(), pid);
	}



}
