#include <iostream>

using namespace std;

int jam(int num1, int num2){
    return num1+num2;
}
int menha(int num1, int num2){
    return num1-num2;
}
int zarb(int num1, int num2){
    return num1*num2;
}
int taghsim(int num1, int num2){
    return num1/num2;
}

int main()
{
    int menu, num1, num2, result;
    char again;
    cout << "Menu" << endl;
    cout << "\t1. Add" << endl;
    cout << "\t1. Subtract" << endl;
    cout << "\t1. Multiply" << endl;
    cout << "\t1. Divide" << endl;

    while(true){
        cout << endl << "----------------" << endl;
        cout << "Enter your choice ";
        cin >> menu;
        cout << "Enter your two numbers ";
        cin >> num1 >> num2;
        if(menu == 1){
            result = jam(num1, num2);
        }
        if(menu == 2){
            result = menha(num1, num2);
        }
        if(menu == 3){
            result = zarb(num1, num2);
        }
        if(menu == 4){
            result = taghsim(num1, num2);
        }

        cout << "Result: " << result << endl;
        cout << "Continue?(y/n)" << endl;
        cin >> again;
        if(again == 'y'){
            continue;
        }else{
            break;
        }

    }
    return 0;
}
