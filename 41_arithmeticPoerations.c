#include <stdio.h>

// Write a function that takes in five numbers as parameters along with three pointers.
//Calculate the sum, product, and average of the five numbers, and store each result in their respective pointers.



void calcSPA(int n1, int n2, int n3, int n4, int n5, int *s, int *p, int *a){
	*s = n1+n2+n3+n4+n5;
	*p = n1*n2*n3*n4*n5;
	*a = *s / 5;
}