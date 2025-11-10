#include <stdio.h>

unsigned long int factorial(int num){
	int i = 1;
	unsigned long int fact = 1;  
	while ( i <= num ){
		fact = fact * i;
		i++;
	}
	return fact;

}