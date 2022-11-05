#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)

int main()
{
    int n;
    int k;
    cin>>n>>k;

    int arr[n];

    rep(i,0,n)
    cin>>arr[i];

    map<int,int> freq;

    rep(i,0,n)
    {
        int present_size = freq.size();
      if (freq[arr[i]] == 0 && present_size == k)

          break;

        freq[arr[i]]++;
    }

    vii ans;

    map<int,int> :: iterator it;
    for(it=freq.begin(); it!=freq.end(); it++)
    {
        if(it->second != 0)
        {
            pii p;
            p.first = it->second;
            p.second = it->first;

            ans.push_back(p);
        }
    }

    sort(ans.begin(),ans.end(),greater<pii>());

    vii :: iterator it1;

    for(it1=ans.begin(); it1!=ans.end(); it1++)
    {
        cout<<it1->second<<" "<<it1->first;
    }
    cout<<endl;

    return 0;
}