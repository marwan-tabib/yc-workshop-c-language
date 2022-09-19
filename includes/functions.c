	//////---- Globale Variables ----//////
	
		int chose , i , s = 0;
		produit res[10];
		
	//////---- 	End Variables ----/////
	
	
	//////---- Plugins ----//////
		// Delay
			void delay(int number_of_seconds)
			{
			    // Converting time into milli_seconds
			    int milli_seconds = 1000 * number_of_seconds;
			 
			    // Storing start time
			    clock_t start_time = clock();
			 
			    // looping till required time is not achieved
			    while (clock() < start_time + milli_seconds);
			}
		// Go Back
			void goBack(int zone){
	
				switch(zone){
					case 1 : {
		    			printf("\n\n-- Chose --");
			    		printf("\n1 - Go to genrale menu ->");
			    		printf("\n2 - Go back ->");
			    		printf("\n entrer un numbre : ");
			    		scanf("%d" , &chose);
						chose == 1 ? intro() : chose == 2 ? productSection() : printf("please tree again");
						break;
					}
					case 2 : {
		    			printf("\n\n-- Chose --");
			    		printf("\n1 - Go to genrale menu ->");
			    		printf("\n entrer un numbre : ");
			    		scanf("%d" , &chose);
						chose == 1 ? intro() : printf("please tree again");
						break;
					}
					case 3 : {
		    			printf("\n\n-- Chose --");
			    		printf("\n1 - Go to genrale menu ->");
			    		printf("\n2 - Go back ->");
			    		printf("\n entrer un numbre : ");
			    		scanf("%d" , &chose);
						chose == 1 ? intro() : chose == 2 ? stockSection() : printf("please tree again");
						break;
					}
					default : system("exit");
				}
			}
		// Get Date
			date getDate(){
				date d;
				time_t t = time(NULL);
				struct tm tm = *localtime(&t);
				d.day = tm.tm_mday;
				d.month = tm.tm_mon + 1;
				d.year = tm.tm_year + 1900;
				return d;
			}
	//////---- End Plugins ----/////
	
	
	
	//////---- Functions ----//////
		// Add product
			ajouterProduit(bool multi , produit *T, int *size){
				system("cls");
				// Variables
	    			int n=1 , i , z = *(size);
					T[z].code = z + 1;						
				// Show
				
					if(multi == 0){
						printf("***		Section de les produits -> Ajouter un nouveau produit		***") ;
					}else{
						printf("* how match you added products ? : ");
						scanf("%d" , &n);
						
						system("cls");
						
						printf("***		Section de les produits -> Ajouter plusieurs produits		***");
						printf("\n You Can Add : %d Products\n" , n);
					}
						
					for(i=0; i<n ; i++){
						
	    				T[i].ttc = T[i].prix + T[i].prix * 0.15;
						printf("\n Nome de produit %d : " , T[z].code);
						scanf("%s" , T[z].nome);
						
						printf("\n Quantite de produit %d : " , T[z].code);
						scanf("%d" , &T[z].quantite);
						
						printf("\n Prix de produit %d : " , T[z].code);
						scanf("%f" , &T[z].prix);
						
						printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH \n" , T[z].code , T[z].nome , T[z].quantite , T[z].prix );
						(*size)++;
						z = *(size);
						T[z].code = z + 1;
					}
					delay(1);
					goBack(1);
			}
    	// List product
    		void listTousProduits(bool back , produit *T, int *size){
				system("cls");
				
				// Variables
	    			int i , z = *(size) ;
	    		
	    		// Show
					printf("***		Section de les produits -> List tous produits		***");
					printf("\n Total Products : %d .\n" , z);
	    			
					for(i=0; i<z ; i++){
	    				T[i].ttc = T[i].prix + T[i].prix * 0.15;
						printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH | TTC : %f \n" , T[i].code , T[i].nome , T[i].quantite , T[i].prix , T[i].ttc);
					}
					if(back == 1){
						delay(1);
						goBack(1);
					}
					
			}
    	// Market Place
    		void marketPlace(bool status , produit *T , int *size){
				system("cls");
				// 0 = -- | 1 = ++ 
				// Variables
					int i , z = *(size) , n , check;
				
				// Show 
					if(z==0){
						printf("No Product , first add product !");
						status == 0 ? goBack(1) : goBack(3);
					}else{
						listTousProduits(0 , T , size);
						
						printf("Enter product code : ");
						scanf("%d" , &n);
						n--;
						status == 0 ? T[n].quantite-- : T[n].quantite++ ;
						T[n].d = getDate();
					}
					delay(1);
					status == 0 ? goBack(1) : goBack(3);
			}
		// Recherche Produit
			void rechercheProduit(produit *T , int *size){
				system("cls");
				// Variables
					int i , z = *(size) , n , check;
				
				// Show 
					if(z==0){
						printf("No Product , first add product !");
						goBack(1);
					}else{
						printf(" 1  - Search with code : \n");
						printf(" 2  - Search with quantity : \n ");
						
			        	printf("\n entrer un numbre [0 - Go back]: ");
						scanf("%d" , &chose);
						
						switch(chose){
							case 0 : productSection();
							case 1 : {
								system("cls");
								printf("Enter product code to search : ");
								scanf("%d" , &n);
								int m = n;
								n--;
								if(m == T[n].code){
		  							printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH | TTC : %f \n" , T[n].code , T[n].nome , T[n].quantite , T[n].prix , T[n].ttc);
									delay(1);
									goBack(1);
								}
								else {
									printf("No Result , Please three again...");
									goBack(1);
								}
								break;
							}
							case 2 : {
								system("cls");
								printf("Enter product quantity value: ");
								scanf("%d" , &n);
								printf("%d" , z);
								for(i=0 ; i < z ; i++){
									if(n == T[i].quantite){
										printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH | TTC : %f \n" , T[i].code , T[i].nome , T[i].quantite , T[i].prix , T[i].ttc);
									}else {
										printf("No Result , Please three again...");
										goBack(1);
									}
								}
										delay(1);
										goBack(1);
								break;
							}
							default: rechercheProduit(res , &s);
						}
					}
					delay(1);
					goBack(1);
			}
		// Etat du stock
			void etatDuStock(produit *T , int *size){
				system("cls");
				// variables
					int z = *(size);
					
					for(i=0 ; i < z ; i++){
						if(T[i].quantite < 3){
							printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH | TTC : %f \n" , T[i].code , T[i].nome , T[i].quantite , T[i].prix , T[i].ttc);
						}
					}
					delay(1);
					goBack(3);
			}
		// Alimenter Le Stock
			void alimenterLeStock(produit *T , int *size){
				system("cls");
				// variables
					int z = *(size);
				// Show
					marketPlace(1 , res , &s);
			}
		// Supprimer Produit
			void supprimerProduit(produit *T , int *size){
				system("cls");
				// Variables
					int i , z = *(size) , n , check;
				
				// Show 
					if(z==0){
						printf("No Product , first add product !");
						goBack(2);
					}else{
						listTousProduits(0 , T , size);
						
						printf("Enter product code : ");
						scanf("%d" , &n);
						n--;
						T[n].d = getDate();
						for(i = n ; i < z ; i++){
							T[i].code 	  = T[i+1].code;
							T[i].d 		  = T[i+1].d;
//							T[i].nome 	  = T[i+1].nome;
							T[i].prix 	  = T[i+1].prix;
							T[i].quantite = T[i+1].quantite;
							T[i].ttc 	  = T[i+1].ttc;
						}
						(*size)--;
					}
					delay(1);
					goBack(2);
			}
	//////---- End Functions ----//////

	//////---- Sections ----//////
    	productSection(){
    		system("cls");
	    	// Shows
		    	printf("***		Product Section		***\n");
				printf("[ 1 ]  - To Add One Product : \n");
				printf("[ 2 ]  - To Add Multiple Products : \n");
				printf("[ 3 ]  - To Show All Products : \n");
				printf("[ 4 ]  - To Buy Product : \n");
				printf("[ 5 ]  - To Search Product:\n");
				
	        	printf("\n Add A Number [0 - Go back]: ");
				scanf("%d" , &chose);
				
				switch(chose){
					case 0: intro();
						break;
					case 1: ajouterProduit(0 , res , &s);
						break;
					case 2: ajouterProduit(1 , res , &s);
						break;
					case 3: listTousProduits(1 , res , &s);
						break;
					case 4: marketPlace(0 , res , &s);
						break;
					case 5: rechercheProduit(res , &s);
						break;
					default: productSection();
				}
		}
		// Stock Section
		stockSection(){
			system("cls");
			
			// Show
				printf("***		Stock Section		***\n");
				printf("[ 1 ]  - Etat du stock:\n");
				printf("[ 2 ]  - Alimenter le stock:\n");
			
	        	printf("\n entrer un numbre [0 - Go back]: ");
				scanf("%d" , &chose);
				
				switch(chose){
					case 0: intro();
						break;
					case 1: etatDuStock(res , &s);
						break;
					case 2: alimenterLeStock(res , &s);
						break;
					default : stockSection;
				}
				
		}
	//////---- End Sections ----//////
	
	
	//////---- Main ----//////	
		intro(){
			system("cls");
			// zide wa7ed about wela help section.
			
			// shows
				printf("|*/*/*/*/*/*| Gestion de Pharmacie |*/*/*/*/*/*|\n\n");
				printf("[- 1 -]  - Section de les produits:\n");
				printf("[- 2 -]  - Section de Stock:\n");
				printf("[- 3 -]  - Supprimer les produits par:\n");
				printf("[- 7 -]  - Statistique de vente:\n");
				
		        printf("\n entrer un numbre [0 to exit] : ");
				scanf("%d",&chose);
			
				switch(chose){
					case 0 : system("exit");
							break;
					case 1 : productSection();
							break;
					case 2 : stockSection();
							break;
					case 3 : supprimerProduit(res , &s);
							break;
					default : intro();
				} 
		}
	//////---- End Main ----//////
