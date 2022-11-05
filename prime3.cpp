#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    bool pan;

    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"non prime"<<endl;
            pan=1;
            break;
        }
    }

    if(pan==0)
    {
        cout<<"prime number"<<endl;
    }

   

    return 0;

}