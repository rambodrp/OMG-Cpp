#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    string name;
    cout << "Enter your name"<< endl;
    cin >> name;
    for(int i=1; i<=5; i++){
        system ("CLS");
        cout <<" ()"<< endl<<"(||)"<< endl<<"_||_"<< endl;
        Beep(523,500);
        Sleep(500);

        system ("CLS");
        cout <<" ()"<< endl<<"(||/  Salam"<<" "<<name<<"!!"<< endl<<"_||_"<< endl;
        Sleep(500);
    }
    return 0;
}
