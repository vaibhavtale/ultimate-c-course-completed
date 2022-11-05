#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        cout<<"2"<<endl;

        for(int j=1; j<=n; j+=i)
        {
            cout<<"1"<<endl;
        }
    }

    return 0;
}