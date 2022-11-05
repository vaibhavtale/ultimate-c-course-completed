#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setbit(int n,int pos)
{
    return((n | (1<<pos)));
}

int clearbit(int n,int pos)
{
   // return(n & (~(1<<pos)));

   int mask = ~(1<<pos);

   return(n & mask);
}

int updatebit(int n, int pos,int value)
{
   int mask = ~(1<<pos);

   n = n & mask;

   return(n | (value<<pos));
}

int numberofones(int n)
{
    int count =0;

    while(n)
    {
        n = n & (n-1);
        count++;

    }
    return count;
}

int main()
{
    // get bit

// cout<<getbit(5,2)<<endl;

   // set bit

//cout<<setbit(5,1)<<endl;

//cout<<clearbit(5,2)<<endl;

//cout<<updatebit(5,1,1)<<endl;

cout<<numberofones(19)<<endl;

    return 0;
}