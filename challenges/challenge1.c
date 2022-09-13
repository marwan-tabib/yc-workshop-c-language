#include <stdio.h>
void main() {
    
   // Challenge 1
	// Créez une fonction add(int a , int b) qui permet de faire l'addition des deux nombres a et b.
	
	// Varaibles
	    int a , b , somme;
	    
	// Show	
		
	    printf("Enter Number (a b) : ");
	    scanf("%i %i", &a , &b);
	    
		somme = calc( a , b);
		printf("%d" , somme);
	   
	    
}

int calc(int a , int b){
	
	// varaibles	
	int somme ;
	
	// show
	somme = a + b;
	
	return somme ;
}