#include <stdio.h>
void main() {
    
   // Challenge 13 : Affichage de la valeur octale et hexadécimale équivalente
	// Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal. Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.	

	// Varaibles
	int octal;
		
	// Show			
	    printf("Enter hexadécimal value : ");
	    scanf("%d", &octal);
	    
	    printf("Octal resulte : %d (%o) " , octal , octal);
	    
   return 0;
}