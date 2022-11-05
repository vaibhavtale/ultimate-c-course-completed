#include<iostream>
using namespace std;

bool check(int a,int b,int c)
{
  int x=max(a,max(b,c));
  int y,z;

  if(x==a)
  {
      y=b;
      z=c;
  }
  else if(x==b){
      y=a;
      z=c;

  }
  else{
      y=a;
      z=b;
  }

  if(x*x==y*y+z*z)
  {
      return true;
  }
  return false;
  
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c))
    {
        cout<<"this is a pythagorian triplet"<<endl;

    }
    else{
        cout<<"no this is not"<<endl;
    }

    return 0;
}