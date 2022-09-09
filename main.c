#include <stdio.h>
void main() {
    
   // Challenge 11 : Circonférence d'un rectangle
	// Écrivez un programme pour trouver la circonférence d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).	   
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
	    
	    printf("result : %i " , number_inv);
	    
   return 0;
}
