#include <stdio.h>
void main() {
    
   // Challenge 5 : Affichage Temp√©rature
   // Ecrivez un programme qui demande la temp√©rature en Fahrenheit et la transforme en degr√© Celsius et affiche la sensation ressentie (trËs froid, froid, chaud, tr√®s chaud) La formule :
	
	// Varaibles
		float F ; 
		
	// Show
		printf("Add F∞ value :");
		scanf("%f" , &F );
		
		if (F < 18)
			{
			  printf ("TrËs  froid !");
			}
		if (F >= 18)
			{
				if (F >= 35){
						if (F >= 45){ printf ("TrËs chaud !"); }
					 	else { printf ("Chaud"); }
					}
				else { printf ("Froid"); }
			}
		
   return 0;
}
