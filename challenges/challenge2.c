#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
	
	// Challenge 2: pyramide d'étoile
	// Écrire le programme pour avoir un pyramide d'étoile, le nombre des lignes à composer est demandé à l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.
	
	// Variables 
		int i , j , n;
		
	// Show 
		printf("Add line value : ");
		scanf("%d" , &n);

		for(i = 0 ; i<n ;i++){
			for(j=0;j<(n-i)-1;j++){
				printf("   ");
			}
			for(j=0;j<i*2+1;j++){
				printf(" * ");
			}
			printf("\n");
		}
}