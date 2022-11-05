#include<iostream>
using namespace std;

int main()
{

int n;
cout<<"enter the size of array:\n";
cin>>n;

int min_no;

int arr[n];

for(int i=0; i<n; i++)
{
    cin>>arr[i];

}

for(int i=0; i<n; i++)
{
    min_no=min(min_no,arr[i]);
}
cout<<min_no<<endl;

    return 0;
}