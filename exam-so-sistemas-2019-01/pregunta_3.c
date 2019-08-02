/*
 * pregunta_3.c
 * 
 * Copyright 2019 Invitado <invitado@s5pc26>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int numbers_paths = 32;
char * paths[32];

void splitPath(char* path) 
{ 
    int i; 
  
    for (i = 0; i < numbers_paths; i++) { 
        paths[i] = strsep(&path, ":"); 
  
        if (paths[i] == NULL) 
            break; 
        if (strlen(paths[i]) == 0) 
            i--; 
    } 
} 


int main(int argc, char **argv)
{
	char *path;
	char *entrada;
	
	if(argc != 2){
		printf("Entrada invalida 1 \n");
		return 0;
	}
	entrada = argv[1];
	
	 if( access( entrada, F_OK ) != -1 ) {
		 }
	 else{
		 printf("Entrada invalida \n");
		 return 0;
	 }	 
		 
	
	path = getenv("PATH");
	
	splitPath(path);
	
	for(int i =0; i < numbers_paths ;i++ ){
		 
		 	 
	}
  
	
	 printf("%s\n",path);
	
	
	
	
	return 0;
}








