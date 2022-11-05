#include<iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel,isUppercaseVowel;
    cout<<"enter an alphabet:";
    cin>>c;


    isLowercaseVowel = (c=='a' || c=='e' || c=='i'  ||  c=='o' || c=='u');

    isUppercaseVowel = (c=='A' || c=='E' || c=='I'  ||  c=='O' || c=='U');

    if(isLowercaseVowel || isUppercaseVowel){
        cout<<c<< " is vowel";
    }
    else{
        cout<<c<<" is a consonent";
    }

    return 0;

}