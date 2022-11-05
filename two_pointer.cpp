#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;

    vector<int> a(n);

    for(auto &i : a){

        cin>>i;
    }

    sort(a.begin(),a.end());

    int sum;
    bool found = false;

    for(int i=0; i<n; i++){

        int low = i+1;
        int high = n-1;

        while(low < high){

            sum = a[i] + a[low] + a[high];

            if(sum == x){

                found = true;
            }

             if(sum > x){

                high--;
            }

            else{

                low++;
            }
        }
    }

    if(found){

        cout<<"sum exists"<<endl;
    }
    else{
        cout<<" sum does not exists"<<endl;
    }


    return 0;
}