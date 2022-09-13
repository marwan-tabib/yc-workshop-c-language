#include <stdio.h>

void main() {
    
   // Challenge 2
	// Créez une fonction echanger() pour échanger la valeur de a avec la valeur de b, qu'est ce que vous constatez ? affichez aussi l'état initial des variables a et b.
	
	// Varaibles
	    int a , b , result;
	    
	// Show	
		
	    printf("Enter Number (a b) : ");
	    scanf("%i %i", &a , &b);
	    
		echanger(a , b);
}

void echanger(int a , int b){
	
	// varaibles
	int b1;
	// show
	b1 = b;
	b = a;
	a = b1;
	
	printf("a is %d and b is %d" , a , b);
	
}