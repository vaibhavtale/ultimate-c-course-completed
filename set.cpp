#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // s.erase(3);
    // s.erase(s.begin());

    for(auto i : s)
    {
        cout<<i<<" ";
    }

    set<int>:: iterator it;

    for(it=s.end(); it!=s.begin(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}