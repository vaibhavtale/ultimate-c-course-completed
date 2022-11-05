#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
   if(n==1){

       return true;
   }

   bool restarray = sorted(arr+1, n-1);

return (arr[1]>arr[0] && restarray);

}

int main()
{
   

int arr[]= {1,2,3,4,9,6,7};

cout<<sorted(arr,7)<<endl;

    return 0;
}