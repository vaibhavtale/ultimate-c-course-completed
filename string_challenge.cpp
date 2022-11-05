#include<iostream>
#include<string>
#include<map> 
#include<algorithm>
using namespace std;

int main(){

    string name = "vaibhav gajanan tale";
    string str = "i am groot";

    // to convert a alphabet in to another one wich is just 2 position ahead
    for(int i=0; i<name.length(); i++){

        if(name[i] >= 'a' && name[i] <= 'z'){

            name[i] += 2;
        }
    }

    cout<<name<<endl;

    // to convert lowercase character into uppercase just subtract 32.

    for(int i=0; i<name.length(); i++){

        if(name[i] >= 'a' && name[i] <= 'z'){

            name[i] -= 32;
        }
    }

    cout<<name<<endl;

    // to convert uppercase character into lowercase just add 32.

    for(int i=0; i<name.size(); i++){

        if(name[i] >= 'A' && name[i] <= 'Z'){

            name[i] += 32;
        }
    }

    cout<<name<<endl;

    // use of transform function to convert a lowercase string into uppercase.

    transform(str.begin(),str.end(),str.begin(), :: toupper);

    cout<<str<<endl;

    // use of transform function to convert uppercase characters into lowercase.

    transform(str.begin(),str.end(),str.begin(), :: tolower);

    cout<<str<<endl;

    // a string of numbers is given your task is to make a largest number using it.

    string num = "4938827864";

    // to convert this number into maximum one i just need to sort the string in decreasing order.

    sort(num.begin(),num.end(),greater<int>());

    cout<<num<<endl;

    // to find the character who occurs multiple times

    string s = "hjkpdupnvpuupwtwwwppp";
    map<char,int> mp;

    for(int i=0; i<s.length(); i++){

        mp[s[i]]++;
    }

    map<char,int> :: iterator it;
    int ans = 0;
    char res;
    for(it=mp.begin(); it!=mp.end(); it++){

        if(it->second > ans){

            ans = it->second;
            res = it->first;
        }
    }
    cout<<res<<endl;

    return 0;
}