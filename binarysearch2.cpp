#include <iostream>
using namespace std;

int search(int arr[], int low,int high,int key)
{ 
    if(low > high)
    {
        return -1;
    }
    while(low <= high){

    int mid = (low + high)/2;

   
    if(arr[mid] == key)
    {
        return mid;
    }

    if(arr[low] <= arr[mid])
    {
        if(key >= arr[low] && key <= arr[mid])
        {
            return search(arr,low,mid-1,key);
        }
        else{
            return search(arr,mid+1,high,key);
        }
    }
    
    
        if(key <= arr[high] && key >= arr[mid]);
        {
            return search(arr,mid+1,high,key);
        }
        
          return search(arr,low,mid-1,key); 

}
}

int main()
{

   int arr[] = {20,30,40,50,60,5,10};

   int n = 7;
   int key = 60;

  int idx = search(arr,0,n-1,key);

  if(idx == -1)
  {
      cout<<"hatt"<<endl;
  }
  else{
      cout<<idx<<endl;
  }

    return 0;
}