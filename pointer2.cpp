#include<iostream>
using namespace std;

int main()
{
    int a[3]={10,20,30};

    cout<<*a<<endl;

    int *ptr=a;

    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;

        ptr++;
    }

    return 0;
}