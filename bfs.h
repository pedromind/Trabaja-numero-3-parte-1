#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

typedef struct tnodo{
	char dato;
	int pasos;
	int tiempo;
	int color;
	struct tnodo *anterior;
	struct tnodo *siguiente;
	struct tnodo *padre;
	
}Nodo;

int MatrizAdyacencia[9][9] = {
							0,1,0,0,1,0,1,0,
							1,0,1,0,1,1,1,0,
							0,1,0,1,0,0,0,1,
							0,0,1,0,0,1,0,2,
							1,1,0,0,0,0,0,0,
							0,1,0,1,0,0,0,0,
							1,1,0,0,0,0,0,0,
							0,0,1,1,0,0,0,0};
int Visitados[8]={0,0,0,0,0,0,0,0};
int Cola[100];
int total = 0;
int primero =0;
int ultimo = 0;



int main{
}

