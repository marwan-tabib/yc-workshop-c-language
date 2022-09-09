#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 10 : Circonférence d'un cercle
	// Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur. La formule pour, la circonférence du cercle = 2pr ; où r est le rayon.
	   
	// Varaibles
	    double r;
		
	// Show			
	    printf("Enter rayon value: ");
	    scanf("%lf", &r );
	    
	    printf("Circonférence cercle  : %.2lf " , 2*3.14*r);
	    
   return 0;
}