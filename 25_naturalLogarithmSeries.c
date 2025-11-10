#include <stdio.h>
#include <math.h>

// try to implement the code that calculates the natural log of a given number

float findLog(int x){
	double result = 0;
	if(x<=0){
	    puts("Incorrect Output");
	    return -1;
	}
	
	for(double i = 1; i <= 7; i++){
	    result += (1.0/i)*pow(((x-1.0)/x), i);
	}
	
	return (float)result;
}