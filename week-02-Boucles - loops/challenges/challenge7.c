#include <stdio.h>
void main() {
    
   // Challenge 7
	// Dans cet exercice on va procéder de la manière suivante: on parcourt avec une boucle for de compteur p, les entiers entre 2 et n, n étant le nombre entré par l’utilisateur (ligne 9). Et, à chaque fois on fait un test de primalité sur p (lignes 11-15), s'il s’avère qu’il est premier on l'affiche sur le champ.
	
	// Varaibles
	    int n , i , j , k = 0;
	    
	// Show	
		
	    printf("Enter Number () : ");
	    scanf("%i", &n);
	    
	    for(i = 2 ; i < n ; i++){
	    	k=0;
			for(j = 2 ; j < i ;j++){
		    	if(i % j == 0){
		    		k = 1 ; 
				}
			}
			if(k==0) printf("%d \n" , i);
		}
	   
	    
}