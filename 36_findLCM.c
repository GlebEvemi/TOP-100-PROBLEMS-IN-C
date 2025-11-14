#include <stdio.h>

// Write a program that takes two integers as input and obtains LCM them through the function lcm()
int lcm (int n1, int n2){
	int  z = 0; 
	while(1){
	    z+= n2;
	    if(z % n1 == 0){
	        break;
	    }
	}
	
	return z;
}