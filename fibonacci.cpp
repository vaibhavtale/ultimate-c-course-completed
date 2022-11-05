#include<iostream>
using namespace std;

//to print first n terms of fibonacci series with starting term as 0,1//

int main()
{
    int n;
    cin>>n;

    if(n==1)
    {
        cout<<"0\n";
    }
    else if(n==2)
    {
        cout<<"0 1\n";
    }
    else{

        int next_term, a=0, b=1, i=3;
        cout<<a<<" "<<b<<" ";

        while(i<=n)
        {
            next_term=a+b;
            cout<<next_term<<" ";
            a=b;
            b=next_term;
            i++;

        }

        cout<<"\n";
         }

    

    return 0;
}
