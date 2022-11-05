#include<iostream>
#include<set>
using namespace std;

int main(){

    set<pair<int,int>> s;

    s.insert(make_pair(2,7));
    s.insert(make_pair(6,9));
    s.insert(make_pair(1,8));

    set<pair<int,int>> :: iterator it;
    for(it=s.begin(); it!=s.end(); it++){

        cout<<it->first<<" "<<it->second<<endl;
    }


    return 0;
}