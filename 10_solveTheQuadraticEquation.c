#include <stdio.h>
#include <math.h>

//ax2 + bx + c = 0

void findRoots(float a, float b, float c){
    float root1 = 0.0, root2 = 0.0;
    float d = b*b - 4*a*c;

    
    if(d < 0)
        printf ("No real roots");
    else{
        root1 = (-b + sqrt(b*b - 4*a*c))/ (2.0*a);
        root2 = (-b - sqrt(b*b - 4*a*c))/ (2.0*a);
        printf("%f,%f", root1,root2 ) ;
    }
    
}
