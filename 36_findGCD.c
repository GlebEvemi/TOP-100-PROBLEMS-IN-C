#include <stdio.h>

// Write a program that takes two integers as input and obtains GCD of them through the function gcd().
int gcd (int n1, int n2){
	int z = 0;
	for(int i = n1>n2 ? n2 : n1; i>0; i--){
	        if(n1%i == 0 && n2%i == 0){
	            z = i;
	            return z;
	        }
	    }
	
	return -1;
}