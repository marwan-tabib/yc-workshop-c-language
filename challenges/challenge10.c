#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 10
	// Écrivez un programme en C pour calculer la somme du maximum de 10 nombres en ignorant les nombres négatifs du calcul.
	
	// Varaibles
	    int i=1 ,n, somme=0;
	    
	// Show

	
	while(i<=10){
		printf("add your numbers %d : ",i);
	    scanf("%d", &n);
		if(n < 0){
			continue;
		}
		somme += n;
		i++;
	}
	
	printf("Result %d" , somme);
		
}