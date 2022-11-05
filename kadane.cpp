#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

int sum=0;
int max_sum=0;

for(int i=0; i<n; i++)
{
  //here to reduce time complexity we are using kadanes algorithm wich has time complexity of o(n) our previous code 
  //time complexity of o(n^3) wich is worst now wwe will traverse the loop only once.
// keep adding the elements along traversing and will update max sum

sum+=a[i];

max_sum=max(max_sum,sum);

if(sum<0)
{
    sum=0;
}

}

cout<<max_sum<<endl;

    return 0;
}