#include<iostream>
using namespace std;

void increament(int *a)
{
   *a++;

}

int main()
{
    
    int a=2;
    int *aptr=&a;
    
    increament(aptr);

    cout<<a<<endl;

    return 0;
}