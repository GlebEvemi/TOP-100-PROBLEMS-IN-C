#include <stdio.h>

// Write a recursive function that takes a positive number as an input and calculates its prime factors.

void factorise (int n, int i) {
	if (i <= n){
		if (n % i == 0){
			printf ("%d ", i);
			n = n / i;
		}
		else
			i++;
		factorise(n, i);  
	}
}
int main() {
	int num = 42;
	factorise(num, 2);
    return 0;
}