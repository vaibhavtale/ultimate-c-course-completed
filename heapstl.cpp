#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int> pq;

    pq.push(5);
    pq.push(15);
    pq.push(10);
    
    pq.pop();

    cout<<pq.top()<<endl;

    


    return 0;
}