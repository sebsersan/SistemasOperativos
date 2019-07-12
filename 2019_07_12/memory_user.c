#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char** argv){

 //Validar que se pasa un argumento 
 if(argc < 2){
 printf("No recibio ningun argumento\n");
  return 1;
 }
 //Convertir ese argumento a un numero entero. Ese numero represata
 //la cantidad en megabytes 
 int numeroMB = atoi(argv[1]);

 //Solicitar esa cantidad de megabytes eak heap del 'address space' y
 //asignarlo a un arreglo
 int* array = malloc(numeroMB*1024*1024*(sizeof(int)));
 if(array ==NULL){
  printf("Memoria no asignada\n");
  exit(-1);
 }

 //Iterar sobre el arreglo
 int i = 0;
 for(i;i < numeroMB*1024*1024;i++){
  array[i] = i;
 }
 //Salir
 sleep(10);

 return 0;


}
