#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int num;
	NO *prox;

} NO;

NO *criar_no (){
	NO *novo =(NO*)malloc(sizeof(NO));
	return novo;

}
NO *inserir_no_inicio(NO *Lista,int dado){
	NO *novo_no = criar_no();
	novo_no->num=dado;
		if(Lista == NULL){
			Lista = novo_no;
			novo_no->prox=NULL;
			}
		else{
			novo->prox=Lista;
			Lista=novo_no;
			
				}
	return Lista;
			}
void imprimir_lista(NO* Lista){
		NO *aux = Lista;
		while(aux!=NULL){
		printf("%d",aux->num);
		aux = aux->prox;
					;
}		}

void destruir_no(NO* Lista){
		if ( Lista != NULL){
		while (Lista != NULL){
		free(Lista->prox);
			}}}
	
	
int main() {
	NO *Lista = NULL;
	Lista = inserir_no_inicio(Lista,10);
	Lista = inserir_no_inicio(Lista,20);
	imprimir_lista(Lista);
 	destruir_no(Lista);
return 0;
}
