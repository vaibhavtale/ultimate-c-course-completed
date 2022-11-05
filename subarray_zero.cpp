#include <iostream>
#include <map>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin >> n;

    int arr[n];

    rep(i, 0, n)
            cin >>
        arr[i];

    map<int, int> cnt;

    int pref_sum = 0;

    rep(i, 0, n){
        pref_sum += arr[i]; 
        cnt[pref_sum]++;}

    int ans = 0;

    map<int, int>::iterator it;

    for (it = cnt.begin(); it != cnt.end(); it++)
    {
        int c = it->second;

        ans += (c * (c - 1) )/ 2;

        

        if (it->first == 0)
        {
            ans += it->second;
        }
    }

    cout<<ans<<endl;

        return 0;
}