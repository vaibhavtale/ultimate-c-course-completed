#include<iostream>
using namespace std;

int min_square(int n){

    if(n <= 3){
    
        return n;
    }

    int ans = INT_MAX;

    for(int i=1; i*i <= n; i++){

        ans = min(ans,1 + min_square(n-i*i));
    }

    return ans;
    
}

int main()
{
    int n;
    cin>>n;

    cout<<min_square(n)<<endl;


    return 0;
}