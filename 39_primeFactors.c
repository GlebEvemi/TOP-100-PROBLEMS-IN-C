#include <stdio.h>
#include <math.h>

// Write a function that takes a positive integer as input and obtains its prime factors.

void prime(int num){
	int length = num /2;
	for(int i = 2; i < num / i; i++){
	    if(num % i == 0){
	        num = num / i;
	        printf("%d ", i);
	        i--;
	    }
	}
	printf("%d ", num);
}
