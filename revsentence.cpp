#include <iostream>
#include <stack>
using namespace std;

void reverse(string s)
{

    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {

        int count = 0;
        string word = "";

        while (s[i] != ' ' && i < s.length())
        {

            word += s[i];
            i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {

        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    string s = "hey, how are you doing?";

    reverse(s);

    return 0;
}