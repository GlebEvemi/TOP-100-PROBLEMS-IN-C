#include <stdio.h>

// Write a program to interchange the contents of two variables, x and y, and print their values on the console.

//Method 1
void interchange(int x , int y) {
	
	int temp = x;
	x = y;
	y = temp;

	
	printf("Number at location x = %d and y = %d", x, y);
}


//Method 2
void interchange(int x , int y){
	x = x + y;
	y = x - y;
	x = x - y;	
	printf("Number at location x = %d and y = %d", x , y);
}