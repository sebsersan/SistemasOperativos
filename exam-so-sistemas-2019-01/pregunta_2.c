#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"


volatile float v; 
puerta mipuerta;

void *Division(void *arg) {

    sleep(2);
    float y= 350, z= 25;
    v = z/y;
    
    return NULL;
}

void *Multiplicacion(void *arg) {

    
    float x= 1250;
    v = x*v;
    
    return NULL;
}

int main(int argc, char *argv[]) {
   // crear_puerta(puerta);
    pthread_t p1, p2;
    Pthread_create(&p1, NULL, Division, NULL);
    Pthread_create(&p2, NULL, Multiplicacion, NULL);
    Pthread_join(p1, NULL);
    Pthread_join(p2, NULL);
    destruir_puerta(mipuerta);
    printf("v =  %f\n", v);
    return 0;
}
