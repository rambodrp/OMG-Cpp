#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int num, result=1;

    cin >> num;

    for(int i=1; i<=num; i++){
        result *=i;
    }
    cout <<result;

    return 0;
}

