#include <stdio.h>
void main() {
    
   // Challenge 5 : Affichage Température
   // Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (tr�s froid, froid, chaud, très chaud) La formule :
	
	// Varaibles
		float F ; 
		
	// Show
		printf("Add F� value :");
		scanf("%f" , &F );
		
		if (F < 18)
			{
			  printf ("Tr�s  froid !");
			}
		if (F >= 18)
			{
				if (F >= 35){
						if (F >= 45){ printf ("Tr�s chaud !"); }
					 	else { printf ("Chaud"); }
					}
				else { printf ("Froid"); }
			}
		
   return 0;
}
