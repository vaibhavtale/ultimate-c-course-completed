#include <iostream>
using namespace std;

void subarray(int arr[], int n, int k)
{
    pair<int,int> ans;
    int sum = 0;

    for (int i = 0; i < k; i++)
    {

        sum += arr[i];
    }

    bool found = false;

    if (sum % 3 == 0)
    {
        ans = make_pair(0,k-1);
        found = true;
    }

     for (int i = k; i < n; i++)
        {
            if(found){
                break;
            }

            sum -= arr[i - k];
            sum += arr[i];

            if (sum % 3 == 0)
            {
                ans = make_pair(i-k+1,i);
                found = true;
            }
        }

        if(!found){

          ans = make_pair(-1,0);
        }

        if(ans.first == -1){

            cout<<"not found"<<endl;
        }
        else{

            for(int i=ans.first; i<=ans.second; i++){

                cout<<arr[i]<<endl;
            }
        }

        
    
}

int main()
{

    int n, k;

    int arr[] = {8, 23, 45, 12, 56, 4};
    n = 6;
    k = 3;

     subarray(arr, n, k) ;

    return 0;
}