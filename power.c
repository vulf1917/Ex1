#include <stdio.h>
#include "myMath.h"



double Pow (double x , int y) 
{
if (y==0&&x!=0) {return 1;} // the case its x^0 (0^0 is iligal)
    double base =x;
    if (y>0) // the case its a passitive power x^(+5)
    {   while(y!=1) {
                x=x*base;
                y=y-1;
                    }
    return x;
    }



    else if (y<0) // the case its a negative power x^(-5)
    
	{ y=y*-1 ; // make it possitive power
            {   while(y!=1) {
              
                x=x*x;
                y=y-1;
                            }
    return 1/x;


            }

    }
    return -1;
}

double Exp (int x) {

    return Pow(2.71828182845904, x );
}



