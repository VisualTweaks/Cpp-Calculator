/*Importing modules*/
#include <iostream>
#include <cmath>
using namespace std;

/*Defining Main function*/
int main(){

    /*Defining Vars*/	
    double num1, num2;	
    char op;
	
	/*User input*/
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter op";
    cin >> op;
    cout << "Enter number: ";
    cin >> num2;

	/*Operation statments*/
    int res;
    if(op == '+'){
        res = round(num1 + num2);
    }else if(op == '-'){
        res = round(num1 - num2);
    }else if(op == '*'){
        res = round(num1 * num2);
    }else if(op == '/'){
        res = round(num1 / num2);
    }else {
        cout << "invaild";
    }
    cout << res;

    return 0;
}
