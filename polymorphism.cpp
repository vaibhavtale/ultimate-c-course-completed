#include<iostream>
using namespace std;

    class student{
        public:

        string name;
        int roll_no;

        void behaviour(){
            cout<<name + " has good behaviour."<<endl;
        }

        int behaviour(int marks){
            return marks*2;
        }
    };


int main(){

    student v;
    v.name = "vaibhav";
    v.roll_no = 58;
    v.behaviour();
    cout<<v.behaviour(30)<<endl;
    cout<<v.name<<endl;
    cout<<v.roll_no<<endl;
    

    return 0;
}