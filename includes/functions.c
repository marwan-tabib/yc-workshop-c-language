	//////---- Plugins ----//////
		// Delay
			void delay(int number_of_seconds)
			{
			    // Converting time into milli_seconds
			    int milli_seconds = 1000 * number_of_seconds;
			 
			    // Storing start time
			    clock_t start_time = clock();
			 
			    // looping till required time is not achieved
			    while (clock() < start_time + milli_seconds)
			        ;
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
						chose == 1 ? intro() : chose == 2 ? produitZone() : printf("please tree again");
						break;
					}
					case 2 : {	
		    			printf("\n\n-- Chose --");
			    		printf("\n1 - Go to genrale menu ->");
			    		printf("\n entrer un numbre : ");
			    		scanf("%d" , &chose);
						chose == 1 ? system("exit") : printf("please tree again");
						break;
					}
//					case 2 : {	
//		    			printf("\n\n-- Chose --");
//			    		printf("\n1 - Go Exit ->");
//			    		printf("\n entrer un numbre : ");
//			    		scanf("%d" , &chose);
//						chose == 1 ? system("exit") : printf("please tree again");
//						break;
//					}
				}
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
						printf("\n Nome de produit %d : " , T[z].code);
						scanf("%s" , T[z].nome);
						
						printf("\n Quantite de produit %d : " , T[z].code);
						scanf("%d" , &T[z].quantite);
						
						printf("\n Prix de produit %d : " , T[z].code);
						scanf("%f" , &T[z].prix);
						
						printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH \n" , T[z].code , T[z].nome , T[z].quantite , T[z].prix);
						(*size)++;
						z = *(size);
						T[z].code = z + 1;
					}
					
					delay(1);
					/* 1 : produit zone	*/ 
					goBack(1);
			}
    	// List product
    		void listTousProduits(produit *T, int *size){
				system("cls");
				// Variables
	    			int i , z = *(size);
	    			
						printf("***		Section de les produits -> List tous produits		***");
						printf("\n Total Products : %d .\n" , z);
	    			
					for(i=0; i<z ; i++){
						printf("\nId: %d | Nome: %s | Quantite: %d | Prix: %.2f DH \n" , T[i].code , T[i].nome , T[i].quantite , T[i].prix);
					}
					delay(1);
					/* 1 : produit zone	*/ 
					goBack(1);
			}
    	// Buy product
    		void acheterProduit(){printf("4");}
	//////---- End Functions ----//////

	//////---- Sections ----//////
    	produitZone(){
    			system("cls");

    		// Variables
	    		produit produit;
	    		
	    	// Shows
		    	printf("***		Ajouter un nouveau produit		***");
				printf("\n1  - Ajouter un nouveau produit:\n");
				printf("2  - Ajouter plusieurs nouveaux produits:\n");
				printf("3  - Lister tous les produits:\n");
				
	        	printf("\n entrer un numbre [0 to exit]: ");
				scanf("%d" , &chose);
				
			
				switch(chose){
					case 0: system("exit");
						break;
					case 1: ajouterProduit(0 , res , &s);
						break;
					case 2: ajouterProduit(1 , res , &s);
						break;
					case 3: listTousProduits(res , &s);
						break;
				}
		}
	//////---- End Sections ----//////
	//////---- Main ----//////	
		intro(){
			system("cls");
			// zide wa7ed about wela help section.
			
			// shows
				printf("|*/*/*/*/*/*| Gestion de Pharmacie |*/*/*/*/*/*|\n\n");
				printf("1  - Section de les produits:\n");
				printf("2  - Acheter produit:\n");
				printf("3  - Rechercher les produits Par:\n");
				printf("4  - Etat du stock:\n");
				printf("5  - Alimenter le stock:\n");
				printf("6  - Supprimer les produits par:\n");
				printf("7  - Statistique de vente:\n");
		        printf("\n entrer un numbre [0 to exit] : ");
				scanf("%d",&chose);
			
			switch(chose){
				case 0 : system("exit");
						break;
				case 1 : produitZone();
						break;
	//			case 2 : ajouterPlusieursProduits();
	//					break;
	//			case 3 : listTousProduits();
	//					break;
	//			case 4 : acheterProduit();
	//					break;
			} 
		}
	//////---- End Main ----//////
