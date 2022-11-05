#include<iostream>
using namespace std;

int linear(int n,int arr[],int key)
{
for(int i=0; i<n; i++)
{
    if(arr[i]==key)
    {
     return i;
    }
}

return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array\n";
    cin>>n;

    int arr[n];
 cout<<"enter the array elements\n";
    for(int i=0; i<n; i++)
    {
       
        cin>>arr[i];
    
    }
    int key;
    cout<<"enter a key\n";
    cin>>key;

    cout<<linear(n,arr,key)<<endl;

    return 0;
}