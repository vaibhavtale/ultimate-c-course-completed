#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "aaaassssdaaaaaaasss";
    string result = "";

    for(int i=0; i<str.length(); i++){

        if(str[i] != str[i-1]){

            result += str[i];
        }
    }

    cout<<result<<endl;

    return 0;
}