#include<iostream>
using namespace std;

bool eligible(int n)
{
    if(n>18)
    {
        return true;
    }

    return false;
}

int main()
{
    int age;
    cout<<"Enter your age: \n";
    cin>>age;
    int n=age;

    if(eligible(n))
    {
        cout<<"you can vote"<<endl;
    }
    else{
        cout<<"sorry!! you can not vote"<<endl;
    }
   

    return 0;
}