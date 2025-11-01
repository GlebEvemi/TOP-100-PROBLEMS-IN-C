#include <stdio.h>
#define M_PI 3.14159265358979323846

//Write a program that receives latitude values (L1, L2) and longitude (G1, G2) of two places on Earth, in degrees, and returns the distance between them.

//The formula for distance in nautical miles is:

//d = 3963 * acos ( sin ( lat1 ) * sin ( lat2 ) + cos ( lat1 ) * cos ( lat2 ) * cos ( lon2 - lon1 ) );
//Before using the above formula, you need to convert all the angle values from degrees to radians because all the trigonometric functions use values that are in radians.

float Distance(float lat1, float lon1, float lat2, float lon2) {
	float d;
  	lat1 = lat1 * M_PI / 180;
	lat2 = lat2 * M_PI / 180;
	lon1 = lon1 * M_PI / 180;
	lon2 = lon2 * M_PI / 180;
	
	d = 3963 * acos ( sin ( lat1 ) * sin ( lat2 ) + cos ( lat1 ) * cos ( lat2 ) * cos ( lon2 - lon1 ) ) ;
	return d;
}