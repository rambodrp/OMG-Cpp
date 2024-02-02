#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
     for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                if(i<=j){
                cout << i*j<< " ";
                }else{
                    cout << "   ";
                }

            }
            cout << endl;

    }
     cout << endl;
      cout << endl;
     for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                if(i>=j){
                cout << i*j<< " ";
                }else{
                    cout << "  ";
                }

            }
            cout << endl;

    }
     cout << endl;
      cout << endl;
    for(int i=1; i<=10; i++){
            for(int j=1; j<=10-i+1; j++){
                    cout << i*j<< " ";
                }


            cout << endl;
    }
    cout << endl;
    cout << endl;
for(int i=1; i<=10; i++){
            for(int  j=1;j<=10; j++){
                if(j>=10-i+1){
                    cout << i*j<< " ";
                }else{

                   cout << "   ";
                }

             }


            cout << endl;
    }
     cout << endl;
      cout << endl;
    for(int i=1; i<=10; i++){
            for(int j=1; j<=10; j++){
                if(i<j||i>j){
                cout << i*j<< " ";
                }else{
                    cout << "   ";
                }

            }
            cout << endl;
    }

    return 0;
}
