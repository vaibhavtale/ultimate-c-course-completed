#include<iostream>
#include<unordered_set>
using namespace std;

int distinct(int arr[],int n)
{
    unordered_set<int> set;
   
   for(int i=0; i<n; i++)
    {
        set.insert(arr[i]);
    }

    return set.size();
    
}

int main()
{

    int arr[] = {4,6,3,3,7,2,4};
    int n = 7;

    cout<<distinct(arr,n)<<endl;


//     unordered_set<int> s;

//     s.insert(2);
//     s.insert(3);
//     s.insert(6);
    
//      s.clear();

//    if( s.find(8) == s.end())
//    {
//        cout<<"key not found"<<endl;
//    }
//    else{
//        cout<<"key found"<<endl;
//    }

//     for(auto it=s.begin(); it!=s.end(); it++)
//     {
//         cout<<*it<<" "<<endl;
//     }

   

//     cout<<s.size()<<endl;

    return 0;
}