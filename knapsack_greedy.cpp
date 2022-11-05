#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


#define rep(i,a,b) for(int i=a; i<b; i++)
#define v vector<int> 
#define pii pair<int,int>
#define vii vector<pii>

bool mycompare(pii p1, pii p2)
{
    double v1 = (double) p1.first / p1.second;
    double v2 = (double) p2.first / p2.second;

    return v1 > v2;

}

int main()
{
    int n;
    cin>>n;

    vii k(n);
    
   
    rep(i,0,n)
    {
        cin>>k[i].first>>k[i].second;
    }
     int w;
    cin>>w;

    sort(k.begin(),k.end(),mycompare);
    
    int ans = 0;

    rep(i,0,n)
    {
        if(w >= k[i].second)
        {
            ans += k[i].first;
            w -= k[i].second;
            continue;
        }

        double vw = (double) k[i].first / k[i].second;
        ans += vw * w;
        w = 0;
        break;
        
    }
    cout<<ans<<endl;
    

    return 0;
}