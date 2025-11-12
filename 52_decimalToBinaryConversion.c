#include <stdio.h>
// Write a function that takes a positive integer as input and prints its binary equivalent using recursion.

void decToBinary (int n){
    if(n < 2){
        printf("1");
    }
	else if(n % 2 == 0){
	    decToBinary(n/2);
	    printf("0");
	}
	else{
	    decToBinary(n/2);
	    printf("1");
	}
}