#include <stdio.h>

 // the boxerclass of a boxer given his weight.

void boxerClass(int weight) {
    if(weight < 0)
        puts("Invalid Input");
	else if(weight < 115)
	    puts("Flyweight");
	else if(weight>= 115 && weight <= 121)
	    puts("Bantamweight");
	else if(weight >= 122 && weight <= 153)
	    puts("Featherweight");
	else if(weight >= 154 && weight <= 189)
	    puts("Middleweight");
	else{
	    puts("Heavyweight");
	}
	
}