#include <stdio.h>
#include <math.h>

int baseConversion(int num){
	int n, rem, oct, index; 
	if (num < 0)
		return -1;
	else{
		n = num;
		oct = index = 0;
	
		while ( n > 0 ) {
			rem = n % 8;
			n = n / 8;
			oct = oct + rem * pow ( 10, index );
			index++;
		}
		return oct;
	}
}