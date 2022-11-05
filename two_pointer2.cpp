#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int> a(n);

    for(auto &i : a){
        cin>>i;
    }

    // take two pointers as i and j at 0 move j to increase the window size & move i to shrink the window size

    int i=0; int ans = 0; int zerocount = 0;

    for(int j=0; j<n; j++){

        if(a[j] == 0){

            zerocount++;
        }

        while(zerocount > k){

            if(a[i] == 0){

                zerocount--;
            }

            i++;
        }
        
        ans = max(ans,j-i+1);
    }

    cout<<ans<<endl;

    return 0;
}