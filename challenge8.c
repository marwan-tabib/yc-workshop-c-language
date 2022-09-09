#include <stdio.h>
void main() {
    
   // Challenge 8 : Moyenne et somme de 4 nombres
   // a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine. (a/b donne le quotient de la division, a%b donne le reste de la division)
	
	// Varaibles
	    double n1, n2 , n3 , n4 , somme;
		
	// Show	
	    printf("Enter numbers (Ex : 13 23 45 53): ");
	    scanf("%lf %lf %lf %lf",&n1 , &n2 , &n3 , &n4);
	    somme = n1 + n2 + n3 + n4 ;
		printf("Result : %2.lf" , somme / 4);
		
   return 0;
}