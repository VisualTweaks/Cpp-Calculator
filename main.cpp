#include <iostream>
#include <cmath>
using namespace std;

int normalcalc(){

    double num1, num2;
    char op;

    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;

    double result;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "An error has occurred in the following application, Please rerun the application\n";
    }
    cout << "The answer is " << result << endl;
    return result;
}

int sqroot(){

    double num1, num2;
    char op;

    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;

    double result;
    switch(op){
        case '+':
            result = sqrt(num1 + num2);
            break;
        case '-':
            result = sqrt(num1 - num2);
            break;
        case '*':
            result = sqrt(num1 * num2);
            break;
        case '/':
            result = sqrt(num1 / num2);
            break;
        default:
            cout << "An error has occurred in the following application, Please rerun the application\n";
    }
    cout << "The answer is " << result << endl;
    return result;
}

int main(){
    
    char calc;
    cout << "Would you like the normal calculator (Y/N): ";
    cin >> calc;
    
    if(calc == 'Y'){
        normalcalc();
    }else if(calc == 'N'){
        char calc2;
        cout << "Would you like the sqrt calcluator (Y/N): ";
        cin >> calc2;

        if(calc2 == 'Y'){
            sqroot();
        }else if(calc2 == 'N'){
            exit(0);
        }
    }
    return 0;
}
