#include<iostream>
#include<algorithm>
using namespace std;

bool find_triplet(int arr[],int n,int sum)
{
    sort(arr,arr+n);

    for(int i=0; i<n-2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        
         while(l < r)
         {
             if(arr[i] + arr[l] + arr[r] == sum)
             { 
                 cout<<arr[i]<<arr[l]<<arr[r]<<endl;
                 return true;
             }
             else if(arr[i] + arr[l] + arr[r] < sum)
             {
                 l++;
             }
             else{

                 r--;
             }
         }
    }
    return false;
}

int main()
{
    int arr[] = {2,9,5,1,0,8};
    int n = 6;

    cout<<find_triplet(arr,n,6);

    return 0;
}