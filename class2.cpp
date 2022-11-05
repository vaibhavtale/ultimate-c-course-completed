#include<iostream>
using namespace std;

class hero{
    public:
    int health = 8;

    hero(){
        cout<<"default constructor is called"<<endl;
    }

    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }
};

int main(){
    
    cout<<"hii"<<endl;
    hero vaibhav;
    cout<<"hello"<<endl;

    // cout<<sizeof(h1.health)<<endl;
    // cout<<h1.gethealth()<<endl;
    // h1.sethealth(34);
    // cout<<h1.gethealth()<<endl;
    return 0;
}