#include<iostream>
using namespace std;

class student{

    public:

    string name;
    int age;
    bool gender;

    student(){
       // cout<<"default construnctor"<<endl;
    }

    student(string s,int a,bool g)
    {
        name = s;
        age = a;
        gender = g;
    }

    void printinfo()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};

int main()
{
    student a("urvi",21,1);
    student b("purva",23,1);
    a.printinfo();
    b.printinfo();

    student c;

    return 0;
}