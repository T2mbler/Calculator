#include <iostream>
#include <cmath>
#include "ifClauseChoice.h"


bool checkOp(char op) {
    if (op == '+' || op == '-' || op == '/' || op == '*' || op == 's' 
     || op == '^' || op == 'r' || op == 'q') {
        return true;
    } else {
        return false;
    }
}

int main(){
    using namespace std;

    cout << "Enter the operation \n" 
         << "'+' -- addition \n" << "'-' -- subtraction \n" << "'/' -- division \n" << "'*' -- multiplication \n" << "'s' -- square root extraction \n" 
         << "'^' -- exponentiation of a number \n" << "'r' -- extracting the root of the n-degree \n" << "'q' -- solving the quadratic equation  \n";
    char op; cin >> op;
    if (checkOp(op)) {
        ifClauseOfChoice(op);
    } else {
        cout << "Invalid operation. Try again.\n";
        while (op != '+' && op != '-' && op != '/' && op != '*' && op != 's' && op != '^' && op != 'r' && op != 'q' ) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Enter the operation \n" 
                 << "'+' -- addition \n" << "'-' -- subtraction \n" << "'/' -- division \n" << "'*' -- multiplication \n" << "'s' -- square root extraction \n"
                 << "'^' -- exponentiation of a number \n" << "'r' -- extracting the root of the n-degree \n" << "'q' -- solving the quadratic equation  \n";
            cin >> op;
        }
    }
    
    return 0;
}