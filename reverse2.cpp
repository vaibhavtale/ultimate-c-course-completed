#include<iostream>
using namespace std;

//To print all digits of a positive number from right to left//
int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
        int rem=n%10;
        cout<<rem<<"\n";
        n=n/10;
    }

   


    return 0;
}