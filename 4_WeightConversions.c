#include <stdio.h>

// Write a program that takes the weight of a commodity in kg, and convert it into the following units: Grams, Quintals, Metric Tonnes, Pounds
void convertWeights(float kg) {
	float g = 0, qt = 0, ton = 0, lbs = 0;
	g = kg * 1000;
	qt = kg / 100;
	ton = kg / 1000;
	lbs = kg * 2.204;

	
	printf("Equivalent Weight in grams is %.3f, quintals is %.3f, metric tonnes is %.3f and pounds is%.3f", g, qt, ton, lbs);
}