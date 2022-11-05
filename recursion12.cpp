#include<iostream>
using namespace std;

// to remove consecutively duplicate characters

string remove(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch = s[0];

string ans = remove(s.substr(1));

if(ch==ans[0]){

    return ans;
}


return(ch+ans);

}


int main()
{

cout<<remove("aaaabbeeeccdd")<<endl;

    return 0;
}