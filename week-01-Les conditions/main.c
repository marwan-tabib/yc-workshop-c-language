#include <stdio.h>
void main() {
    
   // Challenge 1 : Paire ou Impaire
	// Ecrivez un programme qui demande un nombre et affiche si ce nombre est paire ou impaire
	
	// Varaibles
	    int number ;
		
	// Show			
	    printf("Enter Number : ");
	    scanf("%i", &number);
	    
	    if(number % 2 == 0){
	    	printf("Number %i is Even " , number);
		}else{
			printf("Number %i is Odd " , number);
		}
	    
   return 0;
}