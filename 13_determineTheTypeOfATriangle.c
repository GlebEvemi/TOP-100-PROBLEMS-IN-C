#include <stdio.h>

// Write a program that takes three sides of a triangle as input, and checks whether the triangle is isosceles, equilateral, scalene, or right-angled.

void identify_Triangle(int s1,int s2,int s3){
    int a,b,c;
    
    if((s1 + s2 <= s3) || (s2 + s3 <= s1) || (s1 + s3 <= s2))
	    puts("The sides do not form a triangle");
    
    else if (s1 != s2 && s2 != s3 && s3 != s1)
        printf ("Scalene triangle ");   

	else if(s1 == s2 && s2 == s3)
	    puts("Equilateral triangle");

	else if((s1 == s2) && (s2 != s3))
	    puts("Isosceles triangle");

	else if ( (s2 == s3) && (s3 != s1) )
				printf ("Isosceles triangle ");
				
	a = ( s1 * s1 ) == ( s2 * s2 ) + ( s3 * s3 );
	b = ( s2 * s2 ) == ( s1 * s1 ) + ( s3 * s3 );
	c = ( s3 * s3 ) == ( s1 * s1 ) + ( s2 * s2 );
	
	if(a || b || c){
	    puts("Right-angled triangle");
	}
}