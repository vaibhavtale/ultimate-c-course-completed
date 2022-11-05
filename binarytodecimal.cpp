#include<iostream>
using namespace std;

int decimaltobinary(int n)
{
  int ans=0;
  int x;
  while(n>0)
  {
    int y=n%10;
    ans=ans+(x*y);
    x=x*2;
    n=n/10;
  }
  return ans;
}

int main()
{
  int n;
  cin>>n;

  cout<<decimaltobinary(n)<<endl;

    return 0;
}