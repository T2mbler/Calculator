#include <iostream>
#include <cmath>
#include "IfClauseOfChoice.h"


bool checkOp(char op) {
    if (op == '+' || op == '-' || op == '/' || op == '*' || op == 's' 
     || op == '^' || op == 'r') {
        return true;
    } else {
        return false;
    }
}

int main(){
    using namespace std;

    cout << "Enter the operation \n" 
         << "'+' -- addition \n" << "'-' -- subtraction \n" << "'/' -- division \n" << "'*' -- multiplication \n" << "'s' -- square root extraction \n" 
         << "'^' -- exponentiation of a number \n" << "'r' -- extracting the root of the n-degree \n";
    char op; cin >> op;
    if (checkOp(op)) {
        ifClauseOfChoice(op);
    } else {
        cout << "Invalid operation. Try again.\n";
        while (op != '+' && op != '-' && op != '/' && op != '*' && op != 's' && op != '^' && op != 'r' ) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Enter the operation \n" 
                 << "'+' -- addition \n" << "'-' -- subtraction \n" << "'/' -- division \n" << "'*' -- multiplication \n" << "'s' -- square root extraction \n"
                 << "'^' -- exponentiation of a number \n" << "'r' -- extracting the root of the n-degree \n";
            cin >> op;
        }
    }
    
    return 0;
}
