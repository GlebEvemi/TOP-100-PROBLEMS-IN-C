#include <stdio.h>

// Write a function that receives two numbers, n and exponent, and calculates the value of n raised to the given exponent.


float power(float n, int exponent) {
    float prod = n;
    if(exponent == 0){
        return prod = 1.0;
    }
	for(int i = 0; i<abs(exponent)-1; i++){
	    prod=prod*n;
	}
	if(exponent > 0){
	    return prod;
	}
	else{
	    return 1.0 / prod;
	}
}