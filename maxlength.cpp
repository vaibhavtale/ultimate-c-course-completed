#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    cin>>a;
    cin.getline(a,n);
    cin.ignore();

    int i=0;
    int length=0;
    int max_length=0;

    while(1)
    {
        (a[i]=='\0' || a[i]==' ')
        {
    
        if(length>max_length)
        {
            max_length=length;
        }
        else{
            length=0;
        }
        }

        length++;

        if(a[i]=='\0')
        break;        

i++;
    }

cout<<max_length<<endl;

    return 0;
}