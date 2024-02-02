#include <iostream>

using namespace std;

double factorial(double n){

    if(n <= 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }

}
int main()
{
    double num, result=1;

    cin >> num;

    cout << factorial(num);


    return 0;
}
