
	typedef struct Date{
		int day , month , year;
	} date ;
	
	typedef struct produit{
		int code , quantite ;
		char nome[20]  ;
		date d;
		float prix , ttc;
	} produit ;
