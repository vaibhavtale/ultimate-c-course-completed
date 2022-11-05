#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;
    if (savings>5000)
    {
       if(savings>8000)
       {
       cout<<"go for rod trip with neha\n";
       }
       else{
           cout<<"shopping with neha\n";
       }
    }
    else if(savings>1000){
        cout<<"go with pushpa";
    }
    
    else{
        cout<<"go with your freinds\n";
    }
    
}