#include <iostream>
using namespace std;

#define n 100

class stack
{

public:
    int *arr;
    int top;

    stack()
    {

        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {

        if (top == n - 1)

        {
            cout << "stack is overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
        {

            cout << "no elements to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {

        if (top == -1)
        {

            cout << "no elements in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if(top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}