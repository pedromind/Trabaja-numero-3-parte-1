#ifndef STDLIB_H
#include <stdlib.h>
#definde STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#definde STDIO_H
#endif

typdef struc tnodo{
	char dato;
	int pasos;
	int tiempo;
	int color;
	struct tnodo *anterior;
	struct tnodo *siguiente;
	struct tnodo *padre;
	
}Nodo;

int MatrizAdyacencia[8][8]{
							0,1,0,0,1,0,1,0
							1,0,1,0,1,1,1,0
							0,1,0,1,0,0,0,1
							0,0,1,0,0,1,0,2
							1,1,0,0,0,0,0,0
							0,1,0,1,0,0,0,0
							1,1,0,0,0,0,0,0
							0,0,1,2,0,0,0,0}
							
	
							
							
							
							
int main(){
}

