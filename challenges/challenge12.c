#include <stdio.h>
void main() {
    
   // Challenge 12 : Nombre entier à trois chiffres en ordre inverse
	// Ã‰crivez un programme pour trouver la circonfÃ©rence d'un rectangle. Prenez la longueur et la largeur du rectangle en entrÃ©e de l'utilisateur. La formule pour la circonfÃ©rence d'un rectangle = 2*(longueur + largeur).	   
	
	// Varaibles
	    int number , number_inv = 0 , N;
		
	// Show			
	    printf("Enter Number : ");
	    scanf("%i", &number);
	    
	    // first number
	    N = number % 10 ; 
	    number /= 10 ; 
	    number_inv += N;
	    
	    // secound number
	    N = number % 10 ; 
	    number /= 10 ; 
	    number_inv *= 10;
	    number_inv +=N;
	    
	    // third number
	    N = number % 10 ; 
	    number /= 10 ; 
	    number_inv *= 10;
	    number_inv += N;
	    
	    printf("Result : %i " , number_inv);
	    
   return 0;
}