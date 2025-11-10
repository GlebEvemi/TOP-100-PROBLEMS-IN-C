#include <stdio.h>
void calculatePopulation(int r1, int w1){
	int r2, w2;
	float  a = 0.01, b = 0.005, c = 0.00001, d = 0.01 ;
	int i;

	if ( r1 < 0 || w1 < 0 )
			printf ( "Initial population should be positive." ) ;
	else{
		for ( i = 1 ; i <= 100 ; i++ ) {
			r2 = ( 1 + a ) * r1 - c * r1 * w1 ; 
			w2 = ( 1 - b ) * w1 + c * d * r1 * w1 ;

			if ( i % 25 == 0 ){
				printf("%d, %d ",r2, w2);
			}
			r1 = r2 ; 
			w1 = w2 ; 
		}
	}
}