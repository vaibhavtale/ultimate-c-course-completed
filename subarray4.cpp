#include<iostream>
using namespace std;
// to print all possible subarray of a given array//


int main()
{
 int n;
 cin>>n;

int a[n];
for(int i=0; i<n; i++)
{
    cin>>a[i];
}

//here we will traverse two loops i and j//

for(int i=0; i<n; i++)
{
    // i will start from index 0 and will end on n-1 index//
    for(int j=i; j<n; j++)
    {
        // j will start from ith index will end on n-1 index when j will be at last index the loop of i will break and the new i loop will begin //
        
      for(int k=i; k<=j; k++)
      {
          // k loop will traverse from i to j and array of k will print all the elements inside that loop//
          cout<<a[k]<<" ";
      }
      cout<<endl;
    }
}



 return 0;
}