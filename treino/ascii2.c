#include <stdio.h>
#include <string.h>
	void imprime(char c[27]){
	int i;
		printf("\n%s\n",c);
}


	void criptografa(char *c){
	int i;
	int aux = c[0];
	for(i = 1 ; i<27 ;i++){
		c[i] = (c[i]+10)%25 +aux;

		}	
	}	
	
	void desenciriptografa(char *c){
	int i;
	int aux = c[0];
	for(i = 1 ; i<27 ;i++){
		c[i] = ((c[i]-10)%25 +aux);

		}		
			
		}
int main() {  
    char c[27] = {"AABCDEFGHIJKLMNOPQRSTUVXWYZ"};
    char d[27] = {"aabcdefghijklmnopqrstuvxwyz"};
    char e[26];
	
	printf("\nO primeiro alfabeto\n");	
	imprime(c);
	criptografa(c);
	imprime(c);
	desenciriptografa(c);
	imprime(c);
	printf("\nO segundo alfabeto\n");	
	imprime(d);
	criptografa(d);
	imprime(d);
	desenciriptografa(d);
	imprime(d);

	
    
   return 0;
}

