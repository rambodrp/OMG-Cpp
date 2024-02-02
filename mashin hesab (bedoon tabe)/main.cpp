#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char operand;

    cout << "Enter your first number ";
    cin >> num1;
    cout << "Enter The operand ";
    cin >> operand;
    cout << "Enter your Second number ";
    cin >> num2;

    if(operand == '+'){
        cout << num1 << " + " << num2 << " = " << num1+num2;
    }else if(operand == '-'){
        cout << num1 << " - " << num2 << " = " << num1-num2;
    }else if(operand == '*'){
        cout << num1 << " x " << num2 << " = " << num1*num2;
    }else if(operand == '/'){
        if(num2 == 0){
            cout << "Adad taghsim bar 0 vojoOd nadare...";
        }else{
            cout << num1 << " / " << num2 << " = " << num1/num2;
        }
    }else{
        cout << "Lotfan Operand Vared konid :)";
    }

    return 0;
}
