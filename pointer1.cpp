#include<iostream>
using namespace std;

void swap(int *&a,int *&b){

    int *temp = a;
    a = b;
    b = temp;


}

int main()
{
  int a = 10;
  int b = 20;


int *x = &a;
int *y = &b;

  swap(a,b);

  cout<<a<<" "<<b<<endl;

    return 0;
}