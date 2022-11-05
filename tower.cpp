#include<iostream>
using namespace std;

void tower(int n,char src,char helper,char dest)
{
  if(n==0)
  {
      return;
  }

tower(n-1 , src , dest, helper);

    cout<<"move from "<<src<<" to "<<dest<<endl;

tower(n-1, helper, src, dest);

    

}

int main()
{

tower(4,'a','b','c');

    return 0;
}