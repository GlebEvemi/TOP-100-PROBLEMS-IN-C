#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

// In mathematics, a point in a plane can be represented using either the Cartesian Coordinate system or the Polar coordinate system.

void convertCoordinates(float x, float y) {
	float r = 0.0, theta = 0.0;
	r = sqrt(x*x + y*y);
	theta = 180/M_PI * atan(y/x);

	
	printf("r = %.2f , theta = %.2f" , r , theta);	
}