#include <stdio.h>
void main() {
    
   // Challenge 7 : Calcule et affichage résultat en format décimal
   // a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine. (a/b donne le quotient de la division, a%b donne le reste de la division)
	
	// Varaibles
	    char operation;
	    double n1, n2;
		
	// Show	
	    printf("Enter Calculate (Just : +, -, *, /): ");
	    scanf("%lf %c %lf",&n1, &operation ,  &n2);
	
	    switch(operation)
	    {
	        case '+':
	            printf("%.2lf + %.2lf = %.2lf",n1, n2, n1+n2);
	            break;
	
	        case '-':
	            printf("%.2lf - %.2lf = %.2lf",n1, n2, n1-n2);
	            break;
	
	        case '*':
	            printf("%.2lf * %.2lf = %.2lf",n1, n2, n1*n2);
	            break;
	
	        case '/':
	            printf("%.2lf / %.2lf = %.2lf",n1, n2, n1/n2);
	            break;
	
	        // operator doesn't match any case constant +, -, *, /
	        default:
	            printf("Error! operator is not correct");
	    }
		
   return 0;
}