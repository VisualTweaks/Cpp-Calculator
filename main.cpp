/*Importing mods*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*Normal Calculator Function*/
int normalcalc(){

    /*Defining Variables*/
    double num1, num2;
    char op;
    
    /*User Input*/
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;

    /*Defining Operator*/
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

/*Square Root Calculator Function*/
int sqroot(){

    /*Defining Variables*/
    double num1, num2;
    char op;

    /*User Input*/
    cout << "Enter Number: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter Number: ";
    cin >> num2;

    /*Defining Operator*/
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

/*Power Calculator Function*/
int powers(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; result++){
        result = result * baseNum;
    }
    cout << "The answer is " << result << endl;
    return result;
}

/*Main Function*/
int main(){
    
    /*Defining The choice*/
    char calc;
    cout << "Would you like the normal calculator (Y/N): ";
    cin >> calc;
    
    if(calc == 'Y'){
        normalcalc();
    }else if(calc == 'N'){
        char calc;
        cout << "Would you like the sqrt calcluator (Y/N): ";
        cin >> calc;

        if(calc == 'Y'){
            sqroot();
        }else if(calc == 'N'){
            char calc;
            cout << "Would you like to use powers (Y/N): ";
            cin >> calc;

            if(calc == 'Y'){
                powers(int,int);/*Input Variables for 'int'*/
            }else if(calc == 'N'){
                exit(0);/*Exits System*/
            }
        }
    }
    return EXIT_SUCCESS;
}
/*I will be updating this as I learn more C++*/
