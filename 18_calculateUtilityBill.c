#include <stdio.h>

int main() {
	int ch;
	float price = 0;
	int wrongInput = 0;
	int meterType, numUnits, power;
	
	printf ("Choose the type of Customer:\n");
	printf ("1. Residential\n");
	printf ("2. Commercial\n");
	printf ("3. Industrial\n");
	printf ("4. Agricultural\n");
	printf ("Enter your choice :\n");
	scanf ("%d", &ch )  ;
	
	switch (ch) {
		case 1:
			printf ("Enter type of meter:\n");
			printf ("1. Single Phase Meter\n");
			printf ("2. Three Phase Meter\n");
			printf ("Enter your choice:\n");
			scanf ("%d", &meterType);
			
			switch (meterType) {
				case 1:
					price = price + 50;
					break;
				case 2: 
					price = price + 200;
					break;
				default:
					wrongInput = 1;
			}
			
			printf ("Enter number of units consumed:\n");
			scanf ("%d", &numUnits );
			
			if (numUnits >= 0) {
				if (numUnits <= 100) 
					price = price + numUnits * 3.76;
				else if (numUnits > 100 && numUnits <= 300) 
					price = price + numUnits * 7.21;
				else if (numUnits > 300 && numUnits <= 500) 
					price = price + numUnits * 9.95;
				else if (numUnits > 500 ) 
					price = price + numUnits * 11.31;
			}
			else
				wrongInput = 1;
			break;
		
		case 2 :
			price = price + 220;
			printf ("Enter number of units consumed:\n");
			scanf ("%d", &numUnits);
			
			if (numUnits >= 0) {
				if (numUnits <= 200) 
					price = price + numUnits * 6.6;
				else
					price = price + numUnits * 9.62;
			}
			else
				wrongInput = 1;
			break;
			
		case 3 :
			price = price + 250;
			printf ("Enter amount of power consumed:\n");
			scanf ("%d", &power);
			
			if ( power >= 0 ) {
				if (power <= 20) 
					price = price + power * 5.43;
				else
					price = price + power * 6.88;
			}
			else
				wrongInput = 1;
			break;
		   
		case 4:
			price = price + 340;
			printf ("Enter amount of horse power consumed:\n");
			scanf ("%d", &power);
			
			if (power >= 0 ) {
				if (power <= 5) 
					price = price + power * 258;
				else
					price = price + power * 360;
			}
			else
				wrongInput = 1;
			break;
		
		default:
			wrongInput = 1;
	}
	
	if (wrongInput == 0) 
		printf ("Total Electricity Bill = %f\n", price);
	else
		printf ("Input not entered correctly\n");

	return 0 ;
}