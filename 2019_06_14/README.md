# Revisión de las funciones para gestión de procesos en C

* [fork-basico](fork-basico.c)
---
Archivos necesarios para la solucion del problema de fibonacci 

* [solucion.c](solucion.c)
* [solucion.h](solucion.h)

Archivo solucion

* [mainsolucion.c](mainsolucion.c)

Para generar la libreria se ejecutan los siguientes comandos:

```
gcc -c solucion.c
ar rc libsolucion.a solucion.o
```

Para compilar su programa usand la nueva libreria:

```
gcc -o mainsolucion -L. mainsolucion.c -lsolucion 
```

