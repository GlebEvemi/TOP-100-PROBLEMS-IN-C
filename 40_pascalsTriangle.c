#include <stdio.h>

// Write a program to generate Pascal’s triangle pattern

int fact (int n){
	int i, p;
	p = 1 ;
 	for (i = 1; i <= n ; i++)
		p = p * i ;
 
	return p;
}

void printPascalTriangle(int num) {
	int i, l;
	for (l = 0; l <= num; l++){
		for (i = 0; i <= (num - l - 1); i++)
			printf ("  ");
		for (i = 0; i <= l; i++)
			printf ("%d   ", fact(l) / (fact(i) * fact (l - i)));      
            printf ("\n");
        }
}

int main() {
	int num = 5;
	printPascalTriangle(num);
    return 0;
}