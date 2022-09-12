#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
	
	// Challenge 3
	// Écrire un programme C qui lit un entier puis détermine s'il est premier ou non. On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même. Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.
	
	// Variables 
		int n , max = 0 , somme = 0 , i , j;
		
	// Show 

			printf("How match number you need enter (0-100) ? : ");
			scanf("%d" , &j);
			
			for(i=0 ; i< j ; i++){
					printf("Add number %d : " , i+1);
					scanf("%d" , &n);
					
					if(n % 10 == 0){
						somme += n;
						if (n > max){
							max = n;
						}
					}
			}
				printf("somme : %d | max : %d \n" , somme , max);
}
