#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 9
	// Ecrivez un programme c pour trouver la puissance d'un nombre en utilisant des boucles while. Le nombre de la base (>0) et l'exposant (>=0) sont pris dans les cas de test.
	
	// Varaibles
	    float n , pow , i , origin;
	    
	// Show
	
		printf("Add your number and pow (4 2) : ");
		scanf("%f %f" , &n , &pow);
	
		origin = n ; 
		
		for(i=2 ; i < pow ; i++){
			n *= n;
		}
		printf("Result %f pow %f = %f" ,  origin , pow , n);
			
}