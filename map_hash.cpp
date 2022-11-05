#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int,int> hash;

    map <int,int> :: iterator it;


    for(it=hash.begin(); it!=hash.end(); it++)
    {
        cout<<it->first<<" "<<it->second;
    }
cout<<endl;

    return 0;
}