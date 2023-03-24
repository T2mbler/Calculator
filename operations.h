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

void qE(double a, double b, double c) {
    using namespace std;
    double sqrtd = sqrt(pow(b,2) - (4*a*c));
    double x1 = (-b + sqrtd)/(2*a);
    double x2 = (-b - sqrtd)/(2*a);
    cout << "Your roots \t" << x1 << "\t" << x2;
}

double fac (double num) {
    int fac = 1;
    for (int i = 2; i<=num; ++i){
        fac = fac * i;
    } 
    return fac;
} 

int rand (int num){
    int a = 1 + rand() % num; 

    return a;
}
double log(double num1, double num2){
    double a = ((log(num1))/(log(num2)));

    return a;
}

#endif