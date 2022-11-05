#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int sum=0;
    int org_num=n;

    while(n>0)
    {
        int last=n%10;
        
        sum=sum+pow(last,3);

        n=n/10;

       
    }

    
        if(org_num==sum)
        {
            cout<<"armstrong number "<<endl;
        }
        else{
            cout<<"not a armstrong number"<<endl;
        }
    

    
return 0;
}