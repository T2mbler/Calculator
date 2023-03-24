#include <iostream>
#include "Operations.h"
#include <cmath>
#include <string>



// this part determines which operation will be performed

#ifndef IfClauseOfChoise_h
#define IfClauseOfChoise_h

void ifClauseOfChoice (char op) { 
    using namespace std;

    if (op == '+'){
        cout << "You have   chosen the addition operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << add (num1, num2); 

    } else if (op == '-'){
        cout << "You have chosen the subtraction operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << sub (num1, num2);

    } else if (op == '/') {
        cout << "You have chosen the division operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << div (num1, num2);  

    } else if (op == '*') {
        cout << "You have chosen the multiplication operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << mul (num1, num2);  

    } else if (op == 's') {
        cout << "You have chosen the square root extraction operation \n";
        cout << "Enter a number \t";
        double num1 = 0;
        cin >> num1; 
        cout << "Your result \t" << sqrt_ (num1);
    } else if (op == '^') {
        cout << "You have chosen the exponentiation function \n";
        cout << "Enter the number you would like to raise to a power \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the degree to which you would like to raise the number \t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << exp (num1, num2);
    } else if (op == 'r') {
        cout << "You have chosen the operation of extracting the root of n-degree \n";
        cout << "Enter the number from which you would like to extract the root \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the root degree \t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << ext (num1, num2);

    } else if (op == 'q') {
        cout << "You have chosen the operation of solving quadratic equations \n";
        cout << "Enter the coefficient at x^2 \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the coefficient at x \t";
        double num2 = 0;
        cin >> num2;
        cout << "Enter the coefficient at c \t";
        double num3 = 0;
        cin >> num3;
        qE(num1, num2, num3);
    
    } else if (op == '!') {
        cout << "You have chosen the factorial operation \n";
        cout << "Enter a number \t";
        double num;
        cin >> num;
        cout << "Your result \t" << fac (num);
    } else if (op == '#') {
        cout << "You have chosen the randomise operation \n" << "Enter a range \n" ;
        int num; 
        cin >> num;
        cout << "You result \t" << rand (num);
    } else if (op == 'l'){
        cout << "You have chosen the operation of calculating the logarithm \n";
        cout << "Enter a number "; double num1; cin >> num1;
        cout << "Enter the base of the logarithm "; double num2; cin >> num2;
        cout << "Your result \t" << log(num1, num2);
    }



}

#endif