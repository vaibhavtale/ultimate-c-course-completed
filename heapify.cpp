#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void insert_heap(int arr[],int n,int val)
{
    n = n+1;
    arr[n] = val;
    int i = n;

    while(i > 0 && arr[i/2] < arr[i])
    {
        arr[i] = arr[i/2];
        i = i/2;
    }

    arr[i/2] = arr[i];


}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if(l < n && arr[l] > arr[largest])
    {
        largest = l;
    }

    if(r < n && arr[r] > arr[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        swap(arr[i],arr[largest]);

        heapify(arr,n,largest);
    }

}

void build_heap(int arr[],int n)
{
    int st = (n/2)-1;

    for(int i=st; i>=0; i--)
    {
        heapify(arr,n,i);
    }

}

void delete_heap(int arr[],int n)
{
    arr[0] = arr[n-1];
    n = n-1;
    int i = 0;

   heapify(arr,n,0);
}


void print_heap(int arr[], int n)
{
  for(int i=0; i<n; ++i)
  {
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main()
{
    int arr[] = {15,4,5,10,6,8,1,3,17,13,9};

     int n  = sizeof(arr) / sizeof(arr[0]);

    // int n = 11;

    build_heap(arr,n);

    // insert_heap(arr,n,2);

    //  delete_heap(arr,n);

    print_heap(arr,n);



    return 0;
}
