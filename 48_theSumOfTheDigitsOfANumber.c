#include <stdio.h>

//  Write a recursive function that takes in a positive integer as input and calculates the sum of its digits.


int rsum(int num) {
	int sum = 0;
	if(num % 10 == num){
	    return num;
	}
	sum += num % 10 + rsum(num / 10);
	
	return sum;
}