#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int Oo=0;
    float dini;
      bool dini2=false;
    float riyazi;
      bool riyazi2=false;
    float varzesh;
      bool varzesh2=false;
    float physics;
      bool physics2=false;
    float computer;
      bool computer2=false;
    float avgi;
    float avg1;
    float avg2;
    float avg3;
    float avg4;
    float avg5;
    float AVG;
    for(int i=1; i<=5; i++){

        bool dini2=false;
        bool riyazi2=false;
        bool varzesh2=false;
        bool physics2=false;
        bool computer2=false;
    string name;
    cout << "Enter your name"<< endl;
    cin >> name;

      while(dini2==false){
        cout << "Enter your Dini score ";
        cin >> dini;
        if(dini>20){
            cout << "error --- nomreye balaye 20 nadarim" << endl;
        }else if(dini < 0){
            cout << "error--- nomreye payeene 0 nadarim" << endl;
        }
        if(dini>=0 && dini<=20){
            dini2=true;
        }
      }

      while(riyazi2==false){
        cout << "Enter your riyazi score ";
        cin >> riyazi;
        if(riyazi>20){
            cout << "error --- nomreye balaye 20 nadarim" << endl;
        }else if(riyazi < 0){
            cout << "error --- nomreye payeene 0 nadarim" << endl;
        }
        if(riyazi>=0 && riyazi<=20){
            riyazi2=true;
        }
      }

        while(varzesh2==false){
        cout << "Enter your varzesh score ";
        cin >> varzesh;
        if(varzesh>20){
            cout << "error --- nomreye balaye 20 nadarim" << endl;
        }else if(varzesh < 0){
            cout << "error --- nomreye payeene 0 nadarim" << endl;
        }
        if(varzesh>=0 && varzesh<=20){
            varzesh2=true;
        }
      }

        while(physics2==false){
        cout << "Enter your physics score ";
        cin >> physics;
        if(physics>20){
            cout << "error --- nomreye balaye 20 nadarim" << endl;
        }else if(physics < 0){
            cout << "error --- nomreye payeene 0 nadarim" << endl;
        }
        if(physics>=0 && physics<=20){
            physics2=true;
        }
      }

        while(computer2==false){
        cout << "Enter your Computer score " << endl;
        cin >> computer;
        if(computer>20){
            cout << "error --- nomreye balaye 20 nadarim" << endl;
        }else if(computer < 0){
            cout << "error --- nomreye payeene 0 nadarim" << endl;
        }
        if(computer>=0 && computer<=20){
            computer2=true;
        }
      }

            avgi =(dini+riyazi+varzesh+physics+computer)/5;
        cout << "This is " << name<< endl;
        cout << "Moadel = "<< avgi<<endl;
        if(avgi>=10){
        cout << "passed!";
        }else{
        cout <<"feiled";

        }
        cout << endl;
    }

        int qq[]={avg1,avg2,avg3,avg4,avg5};
        for(int j=0; j<=4; j++){
        Oo=Oo+qq[j];
        }
        AVG=Oo /5;
        cout << "This is "<< endl;
        cout << "Moadel CLASS = "<< AVG<<endl;



    return 0;
}
