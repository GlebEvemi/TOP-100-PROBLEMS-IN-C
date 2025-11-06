#include <stdio.h>
#include <stdbool.h>

// In the digital world, colours are specified in Red-Green-Blue (RGB) format, 
//with R, G, and B values varying on an integer scale from 0 to 255.
//On the other hand, in print publishing, the colours are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format,
//with C, M, Y, and K values varying on a real scale from 0.0 to 1.0.

void convert_Color(float red, float green, float blue) {
	float  white = 0.0, cyan = 0.0, magenta = 0.0, yellow = 0.0, black = 0.0, max = 0.0;
	if(red == 0 && green == 0 && blue == 0){
	 black = 1.0;
	 printf ( "CMYK = %.3f, %.3f, %.3f, %.3f", cyan, magenta, yellow, black);
	 return;
	}
	
	
	if(((red >= 0 && red <=255) && (green >= 0 && green <=255)) &&  (blue >= 0 && blue <=255)){
	    
	    max = red / 255;
	    if((green / 255) > max)
	        max = green / 255;
	    else if((blue / 255) > max)
	        max = blue / 255;
	white = max;
	cyan = (white - red/255) / white;
	magenta = (white - green/255) / white;
	yellow = (white - blue/255) / white;
	black = 1 - white;
	    printf ( "CMYK = %.3f, %.3f, %.3f, %.3f", cyan, magenta, yellow, black);
	}else{
	    puts("Invalid RGB values");
	}
}