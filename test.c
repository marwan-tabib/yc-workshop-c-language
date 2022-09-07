#include <stdio.h>
void main() {
   // Challenge 1 : Affichage Informations
   
	// Varaibles
    char first_name[20];
    char last_name[20];
    int phone;
    char gender[20];
    
    // Show
    printf("Enter Your First Name: ");
    scanf("%s", &first_name);
    getchar();
    printf("Enter Your Last Name: ");
    scanf("%s", &last_name);
    getchar();
    printf("Enter Your Phone: ");
    scanf("%d", &phone);  
    getchar();
    printf("Enter Your Gender: ");
    scanf("%s", &gender);  
    
    printf("I'm %s %s (%s) , My phone number is %d " , first_name , last_name , gender , phone);
    
   return 0;
}
