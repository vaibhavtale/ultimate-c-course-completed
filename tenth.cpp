#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cout<<"input three sides of a triangle ";
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec)
    {
        cout<<"this is an equilateral triangle";
    }
    else if(sidea==sideb || sidea==sidec || sideb==sidec)
    {
        cout<<"this is an isoscele triangle";

    }
    else{
        cout<<"this is an scalene triangle";
    }

    return 0;
}