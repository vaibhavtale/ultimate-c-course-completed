#include<iostream>
using namespace std;

int main()
{
    //To print half pyramid using numbers//
    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    }
    return 0;

}