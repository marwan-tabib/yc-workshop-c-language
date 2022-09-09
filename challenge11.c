#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 11 : Circonférence d'un rectangle
	// Écrivez un programme pour trouver la circonférence d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur. La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).	   
	// Varaibles
	    double longueur , largeur;
		
	// Show			
	    printf("Enter longueur and largeur : ");
	    scanf("%lf %lf", &longueur , &largeur  );
	    
	    printf("Circonférence rectangle : %.2lf " , 2*(longueur + largeur));
	    
   return 0;
}