#include <stdio.h>
// Write a program to predict the smallest multiple of j but it should be larger than i.

int roundOff(int i , int j) {
	int k = -1;
	k = i + (j - i%j);
	return k;

}