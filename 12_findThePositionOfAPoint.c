#include <stdio.h>

// Given the coordinates (x, y) of the centre of a circle and its radius,
//write a program that will determine whether a point lies inside the circle, on the circle, or outside the circle.

void checkPoint(float  centerX, float centerY, float radius,float  pointX, float pointY){
    float vector_length = sqrt(pointX * pointX + pointY * pointY);
    if(vector_length < radius)
        printf("inside");
    else if(vector_length == radius)
        printf("on");
    else{
        printf("outside");
    }

}