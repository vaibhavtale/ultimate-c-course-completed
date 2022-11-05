#include <iostream>
#include<map>
using namespace std;

signed main(){

    map<int,int> mp;

    int arr[] = {2,2,2,1,1,4,3,4};

    for(int i=0; i<8; i++){

        mp[arr[i]] += 1;
    }

    map<int,int> :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){

        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}