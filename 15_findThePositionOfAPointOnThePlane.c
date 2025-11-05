#include <stdio.h>

// Given a point (x, y), write a program to determine its location on the coordinate plane.

void identifyPoint(int x,int y) {
	if(x == 0 && y == 0)
	    puts("origin");
	else if(x != 0 && y == 0)
	    puts("x-axis");
	else if(x == 0 && y != 0)
	    puts("y-axis");
	else{
	    if(x > 0 && y > 0)
	        puts("First Quadrant");
	    else if(x > 0 && y<0)
	        puts("Fourth Quadrant");
	    else if(x < 0 && y > 0)
	        puts("Second Quadrant");
	    else{
	        puts("Third Quadrant");
	    }
	}
	

}