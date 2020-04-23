#include <stdio.h>
#include <string.h>
int main() {  
    char c[26][1] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","X","Y","Z"};
    printf("Enter a character: ");
    
    // %d displays the integer value of a character
    // %c displays the actual character
	int aux;
	char AUX[26][1];
	int n = strlen(c[26]);
	printf("\no valor da string é: %d\n",n);	
    for ( int i = 0 ; i < 26 ; i++){
		aux=c[i][1];
		AUX[i][1] = c[i][1];
    printf("\nASCII value of %s = %d\n", AUX[i], aux);
	}
    return 0;
}
