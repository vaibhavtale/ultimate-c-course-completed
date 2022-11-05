#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int x;
    cin>>x;

    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    int r=0,c=m-1;

bool flag=false;

    while(r<n and c>=0)
    {
          a[r][c]==x;
          flag=true;

          if(a[r][c]>x)
          {
              c--;
          }
          else{
              r++;
          }
    }

if(flag)
{
    cout<<"element is found"<<endl;
}
else{
    cout<<"element does not exist"<<endl;
}


    return 0;
}