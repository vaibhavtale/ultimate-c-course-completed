#include<iostream>
using namespace std;

class student{
    public:

    string name;
    int age;
      student(int e){
        age = e;
        cout<<"constructor called"<<endl;
     }
};

int main(){

    student a = new student(6);
    cout<<a.age<<endl;
    return 0;
}