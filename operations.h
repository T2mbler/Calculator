#include <iostream>
#include <cmath>

//this part performs calculations

#ifndef operations_h
#define operations_h

double add (double num1, double num2) {
    
    return num1+num2;
}

double sub (double num1, double num2) {

    return num1-num2;
}

double div (double num1, double num2) {

    return num1/num2;
}

double mul (double num1, double num2) {

    return num1*num2; 
}

double sqrt_ (double num1) {

    return sqrt(num1);
}

double exp (double num1, double num2) {
   
    return pow(num1, num2);
}

double ext (double num1, double num2) {
    double num3 = 1/num2;

    return pow(num1, num3);
}

#endif
