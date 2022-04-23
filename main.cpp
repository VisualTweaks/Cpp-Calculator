/*Importing mods*/
#include <iostream>
#include <cmath>
using namespace std;

/*Defining normal calc function*/
int normalcalc(){

    /*Defining Vars*/
    double num1, num2;
    char op;

    /*User input*/
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;
    
    /*Operation input*/
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

/*Defining Square root calc function*/
int sqroot(){

    double num1, num2;
    char op;

    /*Defining Vars*/
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;

    /*Operation input*/
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

/*Defining main function*/
int main(){
    
    /*Calculator options*/
    char calc;
    cout << "Would you like the normal calculator (Y/N): ";
    cin >> calc;
    
    if(calc == 'Y'){
        /*Calling the function*/
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
