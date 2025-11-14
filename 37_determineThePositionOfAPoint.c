#include <stdio.h>

// Write a function that receives coordinates of the bottom left corner of a rectangle, its width,
//height, and coordinates of a point and determines whether the point lies inside, outside, or on the rectangle.
//Input -> (x1, y1, width, height, xpt, ypt)


void pointInRect(int x1, int y1, int wd, int ht, int xpt, int ypt) {
    if(xpt == x1 || xpt == (x1+wd)){
        if(ypt < (y1 + ht) && ypt>y1)
            printf("on");
    }
    else if(ypt == y1 || ypt == (y1+ht)){
        if(xpt < (x1 + wd) && xpt>x1)
            printf("on");
    } 
	else if((xpt>x1 && xpt<(x1+wd)) && (ypt > y1 && ypt < (y1+ht))){
	   printf("inside");
	    
	}
	else{
	    printf("outside");
	}
	
}