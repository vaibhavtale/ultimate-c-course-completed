#include<iostream>
using namespace std;

void fib(int n)
{
   int t1=0;
   int t2=1;
   int next_term=t1+t2;
 
   for( int i=t1; i<=n; i++)
   {
       cout<<t1<<endl;
       next_term=t1+t2;
       t1=t2;
       t2=next_term;
   }
   return;

}

int main()
{
int n;
cin>>n;

fib(n);

return 0;
}