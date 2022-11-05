#include <iostream>
using namespace std;

void selection(int arr[],int n)
 {
        for (int i = 0; i < n-1; i++)
    {
        int j,k;
        for ( j= k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }

        }
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
    }

  }

int main()
{
    int n;
    cin>>n;
    
    int arr[n]; 
    
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    
    

   for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
    cout << endl;

 selection(arr,n);

  for(int i=0; i<n; i++)
   {
       cout<<arr[i]<<" ";
   }
    cout << endl;

    return 0;
}