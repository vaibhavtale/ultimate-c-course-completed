#include<iostream>
using namespace std;

int main()
{
    // To print a inverted half pyramid//

    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;

}