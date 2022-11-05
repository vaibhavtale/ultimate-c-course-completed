#include<iostream>
#include<stack>
using namespace std;

class que{

    public:

    stack<int> s;


    void push(int x)
    {
        s.push(x);
    }

    int pop(){

        if(s.empty()){

            cout<<"queue is underflow"<<endl;
            return -1;
        }

        int t = s.top();
        s.pop();
        if(s.empty())
        {
            return t;
        }

        int item = pop();
        s.push(t);
        return item;
    }
};

int main()
{
       que q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    
    

    return 0;
}