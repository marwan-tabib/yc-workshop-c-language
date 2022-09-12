#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
	
	// Challenge 3
	// Écrire un programme C qui lit un entier puis détermine s'il est premier ou non. On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même. Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.
	
	// Variables 
		int n , i,k=0;
		
	// Show 
		printf("Add line value : ");
		scanf("%d" , &n);

	for(i = 2 ; i < n ; i++){
		if(n%i == 0)
			k=1;
	}
	if(k == 0){
		printf("premier");
	}else printf("no premier");
}