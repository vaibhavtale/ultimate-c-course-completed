#include <iostream>
using namespace std;

class student
{

public:
    string name;
    int age;
    bool gender;

     student(string s,int a, bool g){

        name = s;
        gender = g;

    }

    // void print(){

    //     cout<<name<<endl;
    //     cout<<age<<endl;
    //     cout<<gender<<endl;
    // }
};

int main()
{
    student a = {"mahesh", 21, 0};

    cout << a.gender<< endl;

    // struct student a;
    // struct student *p;

    // a.name = "vaibhav";
    // a.age = 21;
    // a.gender = 0;

    // a.print();

    return 0;
}