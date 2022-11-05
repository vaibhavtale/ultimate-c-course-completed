#include<iostream>
#include<unordered_set>
using namespace std;

int distinct_elements(int arr[],int n)
{
    unordered_set<int> set;
    int i;
    for(i=0; i<n; i++)
    
    int count = 0;

    if(set.find(arr[i]) == set.end())
    {
      set.insert(arr[i]);
      
    }
    
    return count;

}

int main()
{
   

    int arr[] = {4,5,2,1,4,9,5,5};


    // set.insert(4);
    // set.insert(5);
    // set.insert(8);
    // set.insert(9);
    // set.insert(1);
    // set.insert(8);

    // set.erase(set.begin());
    

    // for(auto it = set.end(); it != set.begin(); it++)
    // {
    //     cout<<*it<<endl;
    // }



    return 0;
}