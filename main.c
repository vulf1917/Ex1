#include <stdio.h>
#include "myMath.h"


int main() {


double x =0; // init x 
printf("Please insert a Real number : "); // ask for an input 
scanf("%lf",&x); // put the input in param 

//first Equation 
double eInXPower = Exp((int)x);       ; //calculate  e^x
double xThirdPowMinTwo=Sub((Pow(x,3)),2);//𝑥^3 − 2
double firstAns = Add(eInXPower,xThirdPowMinTwo); // add the part to make the first Equation 

//second Equation
double treeX = Mul(x,3); //calculate 3x
double xSq = (Pow(x,2));  //calculate x^2
double twoXSq = Mul(xSq,2); //calculate 2(x^2)
double secondAns = Add(treeX,twoXSq);   //calculate (x^3)+2(x^2)

//Third  Equation
double fourXCube = Mul((Pow(x,3)),4);        //calculate  4x^3
double fourXCubeDevFive=Div(fourXCube,5);//calculate x In Third Power Minus Two
double thirdAns =Sub(fourXCubeDevFive,Mul(x,2)); // add the part to make the first Equation 

//The printing functions 
printf("The value of f(x) = e^x + x^3 -2 at the point %0.4lf is: %0.4lf \n ",x,firstAns );
printf("The value of f(x) = 3x+2x^2 at the point %0.4lf is: %0.4f   \n",x,secondAns);
printf("The value of f(x) = (4x^3)/5-2x at the point %0.4lf is: %0.4lf  ",x,thirdAns);


}
