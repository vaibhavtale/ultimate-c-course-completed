#include<iostream>
using namespace std;

int main()
{
    //To print half inverted pyramid using numbers//

    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}