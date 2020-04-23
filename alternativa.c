#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
		//estruturas
//angulo
typedef struct {
	int graus;
	int minutos;
	int segundos;
	int troca;
}ANGULO;
//planeta 
typedef struct {
	char nome[20];
	char signo_nome[12][20];
	int casa;
	int signo;
	ANGULO *posicao;
	PLANETA *planeta;
}PLANETA;
//aspecto 
typedef struct {
	bool quadratura,oposicao,quincucio;
	bool conjuncao,sextil,trigono;
}ASPECTO;
//funções  
	  	//funções principais
	 	//funções de angulo
	void imprime (ANGULO angulo3){
		printf("\nO angulo será de %d graus %d minutos %d segundos\n",angulo3.graus,angulo3.minutos,angulo3.segundos);

} 
  	int troca (ANGULO angulo1){
	angulo1.troca = angulo1.graus*3600 + angulo1.minutos*60 + angulo1.segundos;
	 
		return angulo1.troca;
 }
	ANGULO trocainv(ANGULO angulo1){
		
		// valores positivos
		if ( angulo1.troca >= 3600 && angulo1.troca >0){
	angulo1.graus = ((angulo1.troca - angulo1.troca%3600)/3600)%360;
	angulo1.troca = angulo1.troca%3600;
	angulo1.minutos = ((angulo1.troca - angulo1.troca%60)/60)%60;
	angulo1.troca = angulo1.troca%60;
	angulo1.segundos = angulo1.troca%60;
}

	
			if ((angulo1.troca >= 60 && angulo1.troca <3600)){		
	angulo1.minutos = ((angulo1.troca - angulo1.troca%60)/60)%60;
	angulo1.troca = angulo1.troca%60;	
	angulo1.segundos = angulo1.troca%60;
} 
		if (angulo1.troca < 60&&angulo1.troca >=0){
	angulo1.segundos = angulo1.troca%60;
	}
	

		//valores negativos 
		if ( angulo1.troca <= -3600){
	angulo1.graus = (((angulo1.troca - angulo1.troca%3600)/3600)%360);
	angulo1.troca = angulo1.troca%3600;
	angulo1.minutos = ((angulo1.troca - angulo1.troca%60)/60)%60;
	angulo1.troca = angulo1.troca%60;
	angulo1.segundos = angulo1.troca%60;
}
			if ((angulo1.troca < 0 && angulo1.troca <= -60 && angulo1.troca >-3600)){		
	angulo1.minutos = -(((angulo1.troca - angulo1.troca%60)/60)%60);
	angulo1.troca =  angulo1.troca%60;	
	angulo1.segundos = angulo1.troca%60;
}
		if (angulo1.troca >-60 && angulo1.troca < 0){
	angulo1.segundos = -(angulo1.troca%60);
   	}
	
		return angulo1;

}


    
 	ANGULO soma_angulo(ANGULO angulo1, ANGULO angulo2){
	ANGULO angulo3;
		angulo1.troca = troca(angulo1);
		angulo2.troca = troca(angulo2);
		angulo3.troca = angulo1.troca + angulo2.troca ;
		angulo3 = trocainv(angulo3);	
		return angulo3;
}   
	ANGULO subtrai_angulo(ANGULO angulo1, ANGULO angulo2){
 	ANGULO angulo3;

		angulo1.troca = troca(angulo1);
		angulo2.troca = troca(angulo2);
		angulo3.troca = angulo1.troca - angulo2.troca ;
		angulo3 =trocainv(angulo3);	
		return angulo3;
}	 
		ANGULO multiplica_angulo(ANGULO angulo1, ANGULO angulo2){
	ANGULO angulo3;

		angulo1.troca = troca(angulo1);
		angulo2.troca = troca(angulo2);

		angulo3.troca = angulo1.troca*angulo2.troca ;
		angulo3 =trocainv(angulo3);
		angulo3.troca = 0 ;	
		return angulo3;
}	 
		ANGULO divide_angulo(ANGULO angulo1, ANGULO angulo2){
	ANGULO angulo3;

		angulo1.troca = troca(angulo1);
		angulo2.troca = troca(angulo2);
		angulo3.troca = angulo1.troca/angulo2.troca ;
		trocainv(angulo3);
		angulo3.troca = 0;	

		return angulo3;
}
void menu (ANGULO angulo1, ANGULO angulo2){
	ANGULO angulo3;
	angulo3.graus == 0;
	angulo3.minutos == 0;
	angulo3.segundos == 0;
	angulo3.troca == 0;
	
	int k = 0 ;
	int i ;
				
	while( i != 0  ) {
			printf("\n---MENU---\n \nEscolha as opções abaixo\n \n1 : soma os angulos\n\n2: subtrai os angulos\n\n 3:multiplica os angulos \n4:divide os angulos\n0 : sai do programa\n\n");
			scanf("%d",&i);
					/*angulo1.troca = troca(angulo1);	
					angulo2.troca = troca(angulo2);*/
			switch(i){

			case  1 :
				angulo3 = soma_angulo(angulo1,angulo2);
				imprime(angulo3);
				angulo3.troca = 0 ;
					break;	
			case  2 :
				angulo3 = subtrai_angulo(angulo1,angulo2);
				imprime(angulo3);
				angulo3.troca = 0 ;
					break;
			case  3 :
				angulo3 = multiplica_angulo(angulo1,angulo2);
				imprime(angulo3);
				angulo3.troca = 0 ;
					break;
			case 4 :
				angulo3 = divide_angulo(angulo1,angulo2);
				imprime(angulo3);
				angulo3.troca = 0 ;
					break;

				/*	angulo1.troca = troca(angulo1);	
					angulo2.troca = troca(angulo2);*/

		}			
						k++;			
		}
	

} 
	//funcoes secundarias 
	/*	// aspectos planetarios
 bool aspectos (ANGULO angulo1 , ANGULO angulo2){
		bool aspecto;
		if ( abs(subtrai_angulo(angulo1,angulo2)) <= 90 &&  abs(subtrai_angulo(angulo1,angulo2)) > 85    ^  abs(subtrai_angulo(angulo1,angulo2)>= 90 &&  abs(subtrai_angulo(angulo1,angulo2)) < 95)){ 
			ASPECTO.quadratura == true;

}
		else if ( ){
			ASPECTO.oposicao == true;
						}
		else if () {
			ASPECTO.quincucio == true;
						}
		else if () {
			ASPECTO.conjuncao == true	}			
						}
							}

	*/	// casas astrologicas


		// outras 		

// main
int main () {
	ANGULO angulo[3];
	ANGULO angulo1, angulo2;


	printf("\ndigite os angulos que você deseja armazenar\n");
	printf("\nangulo 1\n");
	scanf("%d %d %d",&angulo1.graus,&angulo1.minutos,&angulo1.segundos);
	printf("\nangulo 2\n");
	scanf("%d %d %d",&angulo2.graus,&angulo2.minutos,&angulo2.segundos);
	printf("O angulo 1 é de %d graus %d minutos %d segundos",angulo1.graus,angulo1.minutos,angulo1.segundos);
	printf("O angulo 2 é de %d graus %d minutos %d segundos",angulo2.graus,angulo2.minutos,angulo2.segundos);

	menu(angulo1,angulo2);	

	return 0 ;
}

