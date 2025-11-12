#include <stdio.h>

// Write a function that uses recursion to calculate the factorial of a number passed as a parameter.

int refact(int n) {

	if(n==1)
	    return 1;
	return n * refact(n-1);
}