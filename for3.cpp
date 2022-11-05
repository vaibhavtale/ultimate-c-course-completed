#include<iostream>
using namespace std;

int main()
{
    //to print all even numbers up to 100//

    for(int i=1; i<100; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
            continue;
        }
    }




    return 0;

}