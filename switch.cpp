#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char op;

    cout<<"enter 2 numbers ";

    cin>>num1>>num2;

cout<<"enter a operand ";
cin>>op;

switch (op)
{
    case '+':

     cout<<num1+num2<<endl;
     break;

     case '-':

     cout<<num1-num2<<endl;
     break;

     case '*':

     cout<<num1*num2<<endl;
     break;

     case '%':

     cout<<num1%num2<<endl;
     break;

default:

cout<<"operater not found!"<<endl;
break;


}

return 0;
}