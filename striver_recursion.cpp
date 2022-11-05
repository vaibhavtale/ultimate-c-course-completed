#include<iostream>
using namespace std;

void rec(string s, int n){

    if(n == 0) return ;
    cout<<s<<endl;
    rec(s,n-1);

    
}

int main(){

    rec("vaibhav", 10);
    return 0;
}