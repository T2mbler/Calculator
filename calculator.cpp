#include <iostream>
#include <time.h>
#include <string>
#include "ifClauseChoice.h"
#include "ans.h"


bool checkOp(char op) {
    if (op == '+' || op == '-' || op == '/' || op == '*' || op == 's' 
     || op == '^' || op == 'r' || op == 'q' || op == '!' || op == '#' 
     || op == 'l') {
        return true;
    } else {
        return false;
    }
}

int main(){
    using namespace std;
    srand(time(NULL));

    ans();
    char op; cin >> op;
    if (checkOp(op)) {
        ifClauseOfChoice(op);
    } else {
        cout << "Invalid operation. Try again.\n";
        while (op != '+' && op != '-' && op != '/' && op != '*' && 
               op != 's' && op != '^' && op != 'r' && op != 'q' && 
               op != '!' && op != '#' && op != 'l') {
            cin.clear();
            cin.ignore(32767, '\n');
            ans();       
            cin >> op;
            ifClauseOfChoice(op);
        }
    }
    
    return 0;
}