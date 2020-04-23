#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void soma_angulo (ANGULO angulo1 , ANGULO angulo2 ){


	ANGULO angulo3;
	angulo3.graus = angulo1.graus + angulo2.graus;
	angulo3.minutos = angulo1.minutos + angulo2.minutos;
	angulo3.segundos = angulo1.segundos + angulo2.segundos;
	
	if (angulo3.minutos >= 60 ){
		
		angulo3.graus = angulo3.graus + (angulo3.minutos - angulo3.minutos%60)/60;
		angulo3.minutos = angulo3.minutos%60;
		

}
	if(angulo3.segundos >= 60 ){
		
		angulo3.minutos = angulo3.segundos + (angulo3.segundos - angulo3.segundos%60)/60;
		angulo3.segundo = angulo3.segundos%60;
		}

void subtrai_angulo (ANGULO angulo1 ,ANGULO angulo2){

	ANGULO angulo3;
	angulo3.graus = angulo1.graus - angulo2.graus;
	angulo3.minutos = angulo1.minutos - angulo2.minutos;
	angulo3.segundos = angulo1.segundos - angulo2.segundos;
	
	if (angulo3.minutos < 0 ){
		
		angulo3.graus = angulo3.graus - (angulo3.minutos - angulo3.minutos%60)/60;
		angulo3.minutos = angulo3.minutos%60;
		

}
	if(angulo3.segundos < 0 ){
		
		angulo3.minutos = angulo3.segundos - (angulo3.segundos - angulo3.segundos%60)/60;
		angulo3.segundo = angulo3.segundos%60;
		}




}

void conserta (ANGULO angulo){

	if(){

		
}
	if(){



}

}

typedef struct{
	int graus;
	int minutos;
	int segundos;	
}ANGULO


int main () {

ANGULO pessoas[4];

if ( !pessoas.minutos >= 60 ^ pessoas. ){



}




	return 0;
}




