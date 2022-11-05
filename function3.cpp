#include<iostream>
using namespace std;

bool is_even(int n)
{
    if(n%2==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    
    if(is_even(n))
    {
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }

    return 0;
}