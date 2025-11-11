#include <stdio.h>
#include <math.h>

// Write a function that calculates the area and perimeter of the triangle.
//It receives three sides of a triangle along with two pointers to store the results as parameters.
void calcAreaPeri(float s1, float s2, float s3, float *a, float *p){
    float s;
    *p = s1+s2+s3;
    s = *p/2;
    *a = sqrt(s*(s-s1)*(s-s2)*(s-s3)); // Heron's formula
}
