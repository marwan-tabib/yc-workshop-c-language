#include <stdio.h>
void main() {
    
   // Challenge 13 : Affichage de la valeur octale et hexad�cimale �quivalente
	// �crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal. Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.	

	// Varaibles
	int octal;
		
	// Show			
	    printf("Enter hexad�cimal value : ");
	    scanf("%d", &octal);
	    
	    printf("Octal resulte : %d (%o) " , octal , octal);
	    
   return 0;
}
