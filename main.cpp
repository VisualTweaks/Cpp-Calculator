#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
using namespace std;

void Welcome(){
    cout << "Welcome to the TI-84 Termianl calculator." << endl;
}

int normalcalc(){

    system("clear");
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
            cout << "Invaild Input" << endl;
    }
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int sqroot(){
    
    system("clear");
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
            cout << "Invaild Input" << endl;
    }
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int powers(){
    int num1,pownum;
    cout << "Enter number: ";
    cin >> num1;
    cout << "Enter Power number: ";
    cin >> pownum;
    cout << "The answer is ";
    cout << pow(num1, pownum) << endl;
    return 0;
}

int Cosine(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = cos(parms * PI / 180.0);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int ACosine(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = acos(parms * 180.0/ PI);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int Sine(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = sin(parms * PI / 180.0);
    cout << "The answer is ";
    cout << result << endl;
    return result;
} 

int ASine(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = asin(parms * 180.0/ PI);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int Tangent(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = tan(parms * PI / 180.0);
    cout << "The answer is ";
    cout << result << endl;
    return result;
} 

int ATangent(){
    system("clear");
    double parms, result;
    #define PI 3.14159265
    cout << "Enter Degress: ";
    cin >> parms;
    result = atan(parms * 180.0/ PI);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int CosH(){
    system("clear");
    double parms, result;
    cout << "Enter Number: ";
    cin >> parms;
    result = cosh(parms);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int SinH(){
    system("clear");
    double parms, result;
    cout << "Enter Number: ";
    cin >> parms;
    result = sinh(parms);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int TanH(){
    system("clear");
    double parms, result;
    cout << "Enter Number: ";
    cin >> parms;
    result = tanh(parms);
    cout << "The answer is ";
    cout << result << endl;
    return result;
}

int main(){

    system("clear");
    Welcome();
    char calc;
    cout << "Would you like to use the normal calculator (Y/N): ";
    cin >> calc;

    if(calc == 'Y'){
        normalcalc();
    }else if(calc == 'N'){
        cout << "Would you like to use Sqrt calculator (Y/N): ";
        cin >> calc;

        if (calc == 'Y'){
            sqroot();
        }else if(calc == 'N'){
            cout << "Would you like to use COS calculator (Y/N): ";
            cin >> calc;

            if(calc == 'Y'){
                Cosine();
            }else if(calc == 'N'){
                cout << "Would you like to use SIN calculator (Y/N): ";
                cin >> calc;

                if(calc == 'Y'){
                    Sine();
                }else if(calc == 'N'){
                    cout << "Would you like to use the TAN calculator (Y/N): ";
                    cin >> calc;

                    if(calc == 'Y'){
                        Tangent();
                    }else if(calc == 'N'){
                        cout << "Would you like to use the Arc COS calculator (Y/N): ";
                        cin >> calc;

                        if(calc == 'Y'){
                            ACosine();
                        }else if(calc == 'N'){
                            cout << "Would you like to use the Arc SIN calculator (Y/N): ";
                            cin >> calc;

                            if(calc == 'Y'){
                                ASine();
                            }else if(calc == 'N'){
                                cout << "Would you like to use the Arc TAN calculator (Y/N): ";
                                cin >> calc;

                                if(calc == 'Y'){
                                    ATangent();
                                }else if(calc == 'N'){
                                    cout << "Would you like to use powers (Y/N): ";
                                    cin >> calc;

                                    if(calc == 'Y'){
                                        powers();
                                    }else if(calc == 'N'){
                                        cout << "Would you like to use COSH (Y/N): ";
                                        cin >> calc;

                                        if(calc == 'Y'){
                                            CosH();
                                        }else if(calc == 'N'){
                                            cout << "Wpuld you like to use SINH (Y/N): ";
                                            cin >> calc;

                                            if(calc == 'Y'){
                                                SinH();
                                            }else if(calc == 'N'){
                                                cout << "Would you like to use TANH (Y/N): ";
                                                cin >> calc;

                                                if(calc == 'Y'){
                                                    TanH();
                                                }else if(calc == 'N'){
                                                    main();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return EXIT_SUCCESS;
}
