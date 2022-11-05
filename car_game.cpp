#include<iostream>
using namespace std;

int main(){

    cout<<"Press 's' to start the car"<<endl;
    cout<<"Press 't' to stop the car"<<endl;
    
    char go;

    cin>>go;

    if(go == 's'){

        cout<<"The car has been started."<<endl;
    }
    else if(go == 't'){

        cout<<"The car has been stopped."<<endl;
    }

    else{

        cout<<"You entered the wrong key"<<endl;
    }

    return 0;
}