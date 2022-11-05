#include<iostream>
using namespace std;

// to find the sum till n natural numbers

int sum(int n)
{
  if(n==0)
  {
      return 0;
  }

 int  previous = sum(n-1);

   return n+previous;

}

int main()
{
    int n;
    cin>>n;

cout<<sum(n)<<endl;

    return 0;
}