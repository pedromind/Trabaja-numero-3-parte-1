#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

typedef struct tnodo{
    	int dato;
    	char color;
    	int distancia;
        struct tnodo *padre;
        struct tnodo *siguiente;
		struct tnodo *vecinoAdyacente;
} Nodo;



typedef struct tcola{
		int tamano;
		int total;
    	struct tcola *primero;
    	struct tcola *ultimo;
        struct tnodo *inicio,*final;
} Cola;
 
                                
Cola *creaCola(){
    Cola *aks;
    aks = malloc(sizeof(Cola));
    aks->tamano = 0;
    aks->total = 0;
    aks->primero = NULL;
    aks->ultimo = NULL;
    return (aks);
}
int esVaciaCola(Cola *cola){
    return(!cola->tamano);	
}

int Agrega(Cola *cola, int valor){
     Nodo *nuevo;
     nuevo = malloc(sizeof(Nodo));
     if(nuevo == NULL) return(-1); //error: no hay memoria disponible
     nuevo->dato = valor;
     nuevo->siguiente = NULL;    
     if(esVaciaCola(cola)){
        cola->inicio = nuevo;
        cola->final = nuevo;
     }else{
           cola->final->siguiente = nuevo;
           cola->final = nuevo;
     }
     cola->tamano++;
     return(1);
}



int Sale(Cola *cola){
     if(esVaciaCola(cola)) return (-1);
     Nodo *temp;
     int valor;
     temp = cola->inicio;
     cola->inicio = cola->inicio->siguiente;
     valor = temp->dato;
     free(temp);
     cola->tamano--;
     return(valor);     
}
     
void vaciaCola(Cola *cola){
     //asume que la cola ha sido inicializada
     while(!esVaciaCola(cola))
         atencion(cola);
}


int main{
}

