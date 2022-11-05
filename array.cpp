#include<iostream>
#include<climits>
using namespace std;

int main()
{
     int n;
    // cout<<&n<<endl;
    cin>>n;
   

    int arr[n];
    for(int i=0; i<n; i++)
{
   cin>>arr[i];

}

  int mx;

  for(int i=0; i<n; i++)
  {
      mx=max(mx,arr[i]);
      
  }
cout<<mx<<endl;
    return 0;
}