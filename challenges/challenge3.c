#include <stdio.h>
#include <stdbool.h>

bool isPremier(int n){
	
	// varaibles
		int i;
	
	// show
	    for(i = 2 ; i < n ; i++){
	    	if(n % i == 0){
	    		return true;
			}
				return false;
		}
		
}
int main() {
    
   // Challenge 3
	// Créez une fonction bool isPremier() pour vérifier si un nombre est premier ou non (constatez que le type de la fonction est bool, donc vous devez créer votre type Bool).
	
	// Varaibles
	    int n ;
	    
	// Show	
		
	    printf("Enter Number : ");
	    scanf("%d", &n);
	    
		isPremier(n) ? printf("is not premier") : printf("is premier");
}
