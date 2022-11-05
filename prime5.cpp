#include<iostream>
#include<math.h>
using namespace std;

bool is_prime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    if(is_prime(n))
    {
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"abey chutiye"<<endl;
    }


    return 0;

}