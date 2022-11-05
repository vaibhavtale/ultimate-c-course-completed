#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

   int a[n];
   int mx=INT_MIN;
   int ans=0;

   
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }

   for(int i=0; i<n; i++)
   {
     if(a[i]>a[i+1] && a[i]>mx)
     {
       ans++;
     }

     mx = max(a[i],mx);
   }

cout<<"ans:"<<endl;
cout<<ans<<endl;
  

    return 0;
}