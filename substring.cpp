#include<iostream>
using namespace std;

void subsequence(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    
    string ros=(s.substr(1));
    
    subsequence(ros,ans+ch);
    subsequence(ros,ans);
   
    

}

int main()
{

subsequence("ab","");

cout<<endl;

    return 0;
}