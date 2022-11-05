#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=n; i>=n; i--)
    {
        for(int j=1; j<=n-i+1; ++j){

            cout<<i<<" ";

        }
        cout<<endl;
    }

    return 0;
}