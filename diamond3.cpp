#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int space=(2*n-1)/2;

        for(int j=1; j<=space; j++)
        {
            cout<<"*";


        }
        cout<<endl;

    }

    return 0;
}