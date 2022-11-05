#include<iostream>
using namespace std;

void max(int a,int b,int c)
{
  if(a>b)
  {
    if(a>c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
  }

  else{
       if(b>c)
       {
           cout<<b<<endl;
       }
       else{
           cout<<c<<endl;
       }
      }
      return ;

}

void min(int a,int b,int c)
{
  if(a<b)
  {
    if(a<c){
        cout<<a<<endl;
    }
    else{
        cout<<c<<endl;
    }
  }

  else{
       if(b<c)
       {
           cout<<b<<endl;
       }
       else{
           cout<<c<<endl;
       }
      }
      return ;

}



int main()
{
    int a,b,c;
    cin>>a>>b>>c;

     
    max(a,b,c);
    
    min(a,b,c);

    return 0;
}