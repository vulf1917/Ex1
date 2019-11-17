#include <stdio.h>
#include "myMath.h"

#include<stdio.h>
#include"myMath.h"
float Add (float x, float y)
{
return x+y;
}

float Sub (float x, float y)
{
return x-y;
}

double Mul(double x , int y )
{
return x*y;
}

double Div (double x , int y )
{
    if (y!=0) // the case y is not 0
    {
        return x/y;
    }

    else // the case y is sero
    {
        return -2147483648; //the min value of int
    }
}


