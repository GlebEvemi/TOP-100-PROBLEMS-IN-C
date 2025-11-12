#include <stdio.h>
// The Fibonacci sequence starts with 0 and 1. After the first two terms, each number in the Fibonacci
//sequence is the sum of its two previous numbers.
//Write a recursive function to generate the Fibonacci sequence.


int fibo (int terms){
    if(terms == 0)
        return 0;
    else if(terms == 1)
        return 1;
        
	return fibo(terms-1) + fibo(terms-2);
}