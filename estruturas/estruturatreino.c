#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct (){
	PLANETA planeta[10];
	bool quadratura, quincucio, oposicao;
	bool conjuncao, sextil , trigono;
}ASPECTOS;
typedef struct (){
	int numero
	char nome[20];
	int casa;
	int signo;
	int posicao;
	ASPECTOS aspectos ;
}PLANETA;
	PLANETA mesmo (PLANETA planeta){
		planeta.aspectos.quadratura == false;
		planeta.aspectos.quincucio == false;
		planeta.aspectos.oposicao == false;
		planeta.aspectos.conjuncao == false;
		planeta.aspectos.sextil == false;
		planeta.aspectos.trigono == false;
	return planeta;

}

	ASPECTOS compara (PLANETA planeta){
		for (int  i = 0 ; i < 10 ; i++){
			for ( int j = 0 ; j < 10 ;j++){

		if( i == j ){
			planeta[i].aspecto.planeta[j] = mesmo(planeta);

} 
		else if ( ditancia(planeta[i],planeta[j]) == 90 ){
			planeta[i].aspecto_planeta[j].quadratura == true ;
								}
		else if ( ditancia(planeta[i],planeta[j]) == 150 ){
			planeta[i].aspectos.planeta[j].quincucio == true ;
				}
		else if ( ditancia(planeta[i],planeta[j]) == 180 ){
			planeta[i].aspectos.planeta[j].oposicao == true ;
				}
		else if ( ditancia(planeta[i],planeta[j]) == 5 ){
			planeta[i].aspectos.planeta[j].conjuncao == true ;
				}
		else if ( ditancia(planeta[i],planeta[j]) == 60 ){
			planeta[i].aspectos.planeta[j].sextil == true ;
				}
		else if ( ditancia(planeta[i],planeta[j]) == 120 ){
			planeta[i].aspectos.planeta[j].trigono == true ;
				}
		else if 
}}}


int main (){
PLANETA planeta[10];

planeta[10].nome = {"sol","lua","mercurio","venus","marte","jupiter","saturno","urano","netuno","plutao"}

int i;
int j;


for ( i = 0 ; i < 10 ; i ++){ 
	scanf("%d",&planeta[i].posicao);

}
for ( i = 0 ; i < 10 ; i ++){ 
for ( j = 0 ; j < 10 ; j ++) {
	
	planeta[i] = planeta[i].aspectos.planeta[j];
	planeta[i].asepectos.planeta[j].posicao = (planeta[i].posicao - planeta[j].posicao)%180;
	
}



}
	for (i = 0 ; i < 10 ; i++){
		
	planeta[i].aspectos = compara(planeta[i].aspectos);	
		
}

return(0);

}
