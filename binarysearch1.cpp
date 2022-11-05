#include<iostream>
#include<algorithm>
using namespace std;

bool is_feasible(int mid,int arr[],int n,int k)
{
    int pos = arr[0];  int elements = 1;

    for(int i=1; i<n; i++)
    {
       if( arr[i] - pos >= mid)
       {
           pos = arr[i];
           elements++;
       }
         
       if(elements == k)
       {
           return true;
       }

    }

    return false;
}

int largest_distance(int arr[],int n,int k)
{
    sort(arr,arr+n);

   int res = -1;

   int left = 1;
   int right = arr[n-1];

   

  while(left < right) {

   int mid = (left + right)/2;

   if(is_feasible(mid,arr,n,k))
   {
       res = max(res,mid);
       left = mid + 1;
   }

   else{
       right = mid;
   }
}
   return res;

}

int main()
{

    int arr[] = {9,12};
    int n = 2;

    cout<<largest_distance(arr,n,2)<<endl;

    return 0;
}