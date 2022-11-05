#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;   
}


int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i < j)
    {
      while(arr[i] <= pivot)
     {
        i++;
     }
      while(arr[j] > pivot)
     {
        j--;
     }

     if(i < j)
     {
         swap(& arr[i],& arr[j]);
     }
      
    }
    swap(& arr[l],& arr[j]);
   
    return j;
}


void quicksort (int arr[],int l,int h)
{
    if(l<h)
   { 
    int pivot = partition(arr,l,h);

    quicksort(arr,l,pivot-1);
    quicksort(arr,pivot+1,h);
}

}

int main()
{

    int n;
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

 quicksort(arr, 0, n-1);

    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

   

    
    
    return 0;
}