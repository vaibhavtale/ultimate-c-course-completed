#include<iostream>
using namespace std;

int ncr(int n,int r)
{
    if(r==0 || n==r)
    {  
        return 1;
    }
    else
   return (ncr(n-1,r-1) + ncr(n-1,r));
}

int main()
{
 for(int n=2; n<6; n++)
 {
     for(int r=2; r<6; r++)
     {
     cout<<ncr;
     }
 }
    return 0;
}