#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
	
	// Challenge 1: table de multiplication
	// Ecrire un algorithme qui demande un nombre à l’utilisateur, puis affiche sa table de multiplication de 1 à 10

	// Variables 
		int n , i;
		
	// Show 
		printf("Enter your number :");
		scanf("%d" , &n);
		
		for(i=1 ; i<=10 ; i++){
			printf("%d x %d = %d \n" , n , i , n*i);
		}	
}