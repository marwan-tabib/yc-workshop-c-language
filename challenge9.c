#include <stdio.h>
#include <math.h>
void main() {
    
   // Challenge 9 : Distance entre deux points
   // Ecrivez un programme C pour trouver la distance entre deux points donnés. La formule de distance est dérivée du théorème de Pythagore. Pour trouver la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser les coordonnées de ces paires ordonnées et d'appliquer la formule. Formule de distance Supposons que nous ayons deux points M et N, dont les coordonnées sont respectivement (x1, y1) et (x2, y2). Leur distance peut être représentée par MN et peut être calculée selon la formule ci-dessous, Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- v((x2-x1)² + (y2-y1)²) Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est MN = v((12-4)² + (14-8)²) = v(64 + 36) = v(100) = 10
   
	// Varaibles
	    double x1, x2 , y1 , y2 , M , N , MN;
		
	// Show			
	    printf("Enter numbers x1 and x2 (Ex : 7 3 ): ");
	    scanf("%lf %lf",&x1 , &x2 );
	    printf("Enter numbers y1 and y2 (Ex : 8 4 ): ");
	    scanf("%lf %lf",&y1 , &y2 );
	    M = pow(x1 - y1 , 2);
	    N = pow(x2 - y2 , 2);
	    MN = sqrt(M + N);
	    printf("Result : %.2lf " , MN);
   return 0;
}