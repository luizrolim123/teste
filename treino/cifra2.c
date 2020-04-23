#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	
	

int main(){
char nome[100];
int i , n ;
scanf("%s",nome);
n=strlen(nome);
printf("%s",nome);
	printf("\n%d\n",n);
int aux;
	aux = atoi(nome);		
	printf("\no nome em atoi será %d\n",aux);

for( i = 0 ; i < n ; i++){
	nome[i] = (nome[i]+10);
}
	printf("A mensagem criptografada será\n %s\n",nome);
for ( i = 0 ; i < n ; i++ ){

	nome[i] = (nome[i] - 10);

}

	printf("A mensagem Desencriptada será\n %s\n",nome);

return 0;
}
