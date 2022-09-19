#include <stdio.h>
void main() {
    
   // Challenge 5
    // Écrire un programme C qui lit un entier et l'affiche inversée. On choisira de ne pas afficher chiffre par chiffre mais de construire l'entier inversé puis l'afficher. Ex: si l'entrée est 12345 on doit afficher l'entier 54321.	

	// Varaibles
	    int i , number , number_inv = 0 , N;
	    
	// Show	
		
	    printf("Enter Number : ");
	    scanf("%i", &number);
	    
	    while(number>0){
	    	 N = number % 10 ; 
	    	 number_inv = (number_inv * 10) + N;
		    number /= 10 ; 
	    	
		}
	   
	    printf("Result : %i " , number_inv);
	    
}