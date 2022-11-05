#include <bits\stdc++.h>
#include <stack>
using namespace std;

class stak
{

    queue<int> q1;
    queue<int> q2;
    int N;

public:

    stak(){

        N=0;
    }


    void push(int x)
    {
        q1.push(x);
        N++;
    }

    void pop(){
        
        if(q1.empty())
        {
            cout<<"underflow"<<endl;
            return ;
        }

        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
            
        }

        q1.pop();
        N--;
    }

    int top()
    {
         
        if(q1.empty())
        {
            cout<<"underflow"<<endl;
            return ;
        }

        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
            
        }

    }
};

int main()
{
    stak st;


    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.top()<<endl;
    st.pop();
     cout<<st.top()<<endl;
    st.pop();
     cout<<st.top()<<endl;
    st.pop();
    
   


    return 0;
}