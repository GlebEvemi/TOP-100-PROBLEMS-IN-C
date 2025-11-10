#include <stdio.h>
#include <stdbool.h>


// A prime number is a natural number greater than 1 and is not a product of two smaller natural numbers.

//Write a program to print all prime numbers from 1 to 300.

void primeNumbers() {
	int flag;
	printf("%d ", 2);
	for(int i = 3; i <= 300; i++){
	    flag = 1;
	    for(int y = 2; y<i; y++){
	       if(i%y == 0)
	       {
	        flag = 0;
	        break;   
	       }
	    }
	    
	    if(flag)
	        printf("%d ", i);
	    
	    
	}
  
}