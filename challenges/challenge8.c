#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 8
	// Ã‰crire un programme C qui utilise le principe de dichotomie pour trouver la solution de l'Ã©quation x3+12x2+1=0 dans l'intervalle [-15,-10] avec une prÃ©cision de 0,00001.
	
	// Varaibles
	    double a = -15 , b = -10 , m , fa , fb , fm;
	    
	// Show
	
	
	while(b - a > 0.00001){
		
		m = (a + b) / 2;
	
		fa = pow(a,3) + 12 * pow(a,2) + 1;
		fm = pow(m,3) + 12 * pow(m,2) + 1;
		fb = pow(b,3) + 12 * pow(b,2) + 1;
		
		if(fa * fm < 0){
			b = m ;
		}else a = m ; 
	}
	
	printf("Result [%lf , %lf]" , a , b);
		
}