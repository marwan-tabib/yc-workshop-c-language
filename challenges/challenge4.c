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
float divededby(int n,int a){
	// variales 
		int resulte;
	
	// Show 
		resulte = n / a ; 
		
	printf("%d / %d = %d \n" , n , a , resulte);
	return resulte;
}
int main() {
    
   // Challenge 4
	// Créez une fonction divededby(int n,int a) qui retourne la division des deux valeurs. Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true, sinon on retourne false.
	
	// Varaibles
	    int n , a , resulte;
	    
	// Show	
		
	    printf("Enter Number : ");
	    scanf("%d / %d", &n , &a);
	    
	    resulte = divededby(n , a);
		isPremier(resulte) ? printf("is not premier") : printf("is premier");
}
