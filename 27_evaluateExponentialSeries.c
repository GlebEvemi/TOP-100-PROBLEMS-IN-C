#include <stdio.h>

float findExponential(float x) {
	int i, j;
	float num, den, term, result;

	result = 1;
	for ( i = 1; i <= 10 ; i++ ) {
		num = den = 1.0 ;
		for ( j = 1 ; j <= i ; j++ ) {
			num = num * x ;
			den = den * j ;
		}
		term = num / den ;
		result = result + term ;
	}
  return result;
}
int main() {
  float x = -4; 
  float result = findExponential(x);
  printf ( "e^(%f) = %f\n", x, result);
  return 0;
}