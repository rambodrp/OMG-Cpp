#include <iostream>

using namespace std;

float jam(float n1, float n2){
    return n1+n2;
}
float tafrigh(float n1, float n2){
    return n1-n2;
}
float zarb(float n1, float n2){
    return n1*n2;
}
float taghsim(float n1, float n2){
    return n1/n2;
}

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
        cout << num1 << " + " << num2 << " = " << jam(num1,num2);
    }else if(operand == '-'){
        cout << num1 << " - " << num2 << " = " << tafrigh(num1,num2);
    }else if(operand == '*'){
        cout << num1 << " x " << num2 << " = " << zarb(num1,num2);
    }else if(operand == '/'){
        if(num2 == 0){
            cout << "Adad taghsim bar 0 vojoOd nadare...";
        }else{
            cout << num1 << " / " << num2 << " = " << taghsim(num1,num2);
        }
    }else{
        cout << "Lotfan Operand Vared konid :)";
    }

    return 0;
}
