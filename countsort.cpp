#include<iostream>
using namespace std;

int find_max(int arr[],int n)
{
    int m = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>m)
        {
            m = arr[i];
        }
       
    }
     return m;
}

void countsort(int arr[],int n)
{
    int *count;
    int max ;

    max = find_max(arr,n);
    count = new int[max + 1];

    for(int i=0; i<max+1; i++)
    {
        count[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }
     
    int i=0; int j=0;
    while(j<max+1)
    {
        if(count[j]>0)
        {
            arr[i] = j;
            i++;
            count[j]--;
        }
        else{
            j++;
        }
    }

}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    countsort(arr,n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}