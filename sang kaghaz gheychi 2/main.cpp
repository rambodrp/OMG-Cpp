#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    cout <<"salam khosh amadid be in bazi!."<< endl;
    cout <<"nam bazi sang kaghaz gheychi hast."<< endl;
    cout <<"ghavanin bazi."<< endl;
    cout <<" 1= sang"<< endl;
    cout <<" 2= kaghaz"<< endl;
    cout <<" 3= gheychi"<< endl;
    int i;
    int j;
    int k;
    for(int i=1; i<=5; i++){
    int player1;
    int player2;

    cin >>player1;
    if(player1>3||player1<1){
         cout <<"error --- aadad bozorg tar az 3 va koochek tar az 1 ghabool nist "<< endl;
         cout <<"lotfan dobare emtahan konid";
    }

    cin >>player2;
    if(player2>3||player2<1){
        cout <<"error --- aadad bozorg tar az 3 va koochek tar az 1 ghabool nist "<< endl;
         cout <<"lotfan dobare emtahan konid";
    }

    if(player1 == player2){
        cout << "mosavi!";

}

    if(player1 == 1){
        if(player2 == 2){
            cout << "barande Player2";
            //cout << k=k+1;
        }else{
            cout << "barande Player1";
            //cout << j=j+1;
        }

}

    if(player1 == 1){
        if(player2 == 3){
            cout << "barande Player1";
            //cout << j=j+1;
        }else{
            cout << "barande Player2";
            //cout << k=k+1;
        }

}

    if(player1 == 2){
        if(player2 == 1){
            cout << "barande Player1";
            //cout << j=j+1;
        }else{
            cout << "barande Player2";
            //cout << k=k+1;
        }

}

    if(player1 == 2){
        if(player2 == 3){
            cout << "barande Player2";
            //cout << k=k+1;
        }else{
            cout << "barande Player1";
            //cout << j=j+1;
        }

}

    if(player1 == 3){
        if(player2 == 2){
            cout << "barande Player1";
            //cout << j=j+1;
        }else{
            cout << "barande Player2";
            //cout << k=k+1;
        }

}

    if(player1 == 3){
        if(player2 == 1){
            cout << "barande Player2";
            //cout << k=k+1;
        }else{
            cout << "barande Player1";
            //cout << j=j+1;

        }

}



                cout << endl;

    }


    if(j==k){
    cout << "barande nadarim!";
    }else{
    if(j<k){
     cout << "barande player2";
   }if(j>k){

    cout <<"barande player1" ;
}

      return 0;

}

}

