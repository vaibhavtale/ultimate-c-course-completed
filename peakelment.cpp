#include<iostream>
using namespace std;

int peak_element(int arr[],int low,int high,int n)
{
    int mid = low +(high - low)/2;

    if((mid == 0 || arr[mid-1] < arr[mid]) && (mid == n-1 || arr[mid+1] < arr[mid]))
    {
        return arr[mid];
    }

    else if(mid > 0 && arr[mid-1] > arr[mid]){

        return peak_element(arr,low,mid-1,n);
       
    }

    else{
         return peak_element(arr,mid+1,high,n);
    }

}

int main()
{
    int arr[] = {0,6,8,5,7,9};
    int n = 6;

    cout<<peak_element(arr,0,n-1,n)<<endl;
    return 0;
}