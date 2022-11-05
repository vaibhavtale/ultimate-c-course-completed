#include<iostream>
using namespace std;

#define n 20

class queue{

public:

    int *arr;
    int front;
    int back;


    queue(){

        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x){

        if(back == n-1)
        {
            cout<<"queue is overflow"<<endl;
            return;
        }

        back++;
        arr[back] = x;
         

        if(front == -1)
        {
            front++;
        }
    }

    void pop(){

        
        front++;
    }

    int peek(){

        if(front == -1 || front > back){

            return -1;
        }

        return arr[front];

    }

    bool empty(){

        if(front == -1 || front > back){
            return true;
        }
        else{
            return false;
        }
    }
};


int main()
{
    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
   

    cout<<q.empty()<<endl;


    return 0;
}