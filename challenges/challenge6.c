#include <stdio.h>
#include <stdbool.h>

int main() {
    
   // Challenge 6
	// Écrivez un programme en C pour trier une liste d'éléments à l'aide de l'algorithme de tri à bulles (bubble sort).
	
	// Varaibles
	    int i = 0 , j , origin_n ;
	    int n[] = {13,24,4,35,-23,19};
	    int size = sizeof(n)/sizeof(n[0]);
	    int res[size] ;
	    
	// Show	
		
		for(i = 0 ; i <= 6 ; i++){
			for(j = 0 ; j <= 6 ; j++){
				if(n[i] < n[j]){
					origin_n = n[j];
					n[j] = n[i];
					n[i] = origin_n;
				}
			}
		}
		i = 0 ;
		while(i<size){
			res[i] = n[i];
			printf(" %d | " , res[i]);
			i++;
		}
	    
}
