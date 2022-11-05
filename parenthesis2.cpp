#include <bits\stdc++.h>
using namespace std;

bool is_balanced(stack<char> &st, string s)
{

    bool ans = true;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '(')
        {

            st.push(s[i]);
        }
        else if(!st.empty() && s[i] == ')')
        { 
             st.pop();
            return ans;
           
        }

         else return ans = false;
    }



        if (!st.empty())
        {

            return ans = false;
        }

    return ans;
}

int main()
{

    string s = "((a+b)*(a-b))";
    stack<char> st;

    if(is_balanced){

        cout<<"ha bhai ha hai balanced"<<endl;
    }
    else
    cout<<"na bhai na nai hai balanced"<<endl;

    return 0;
}