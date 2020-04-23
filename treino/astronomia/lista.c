#include <stdio.h>
#include <stdlib.h>

typedef struct Lista{
	int elemento;
	struct Lista *prox;

}celula;
void insereH(celula **topo, int ele){
	celula *novo;
	novo = malloc(sizeof(celula));
	if(*topo==NULL){
		novo->prox = NULL;
		*topo = novo;
		}	
	else{
		novo->prox = *topo;
		*topo = novo;
			}



	}
void printar (celula *topo ){	
	celula *aux;
	aux = topo;
	if ( aux == NULL){

	}
	else {
		do{
			printf("%d->",aux->elemento);
			}
			while(aux!=NULL);
		}
/*
		for( ; aux !=NULL ; i++){
				
			printf("%d->",aux->elemento);
				}

*/

}


int main(){
	celula *topo = NULL;
	insereH(&topo,3);
	insereH(&topo,4);
	printar(topo);


return 0;
}
