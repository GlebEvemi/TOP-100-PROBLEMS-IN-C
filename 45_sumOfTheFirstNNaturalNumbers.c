#include <stdio.h>

// Write a recursive function to obtain the running sum of the first n natural numbers.
int runningSum(int n) {
	int s = 0; 
	if(n == 0){
	    return 0;
	}
	return s + n + runningSum(n-1);
}