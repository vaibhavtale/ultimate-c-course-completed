#include <iostream>
using namespace std;

// void subarray(int arr[], int n)
// {

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {
                                                                                                                                                       
//             sum = 0;
//             for (int k = i; k <= j; k++)
//             {

//                 sum += arr[k];
//             }
//             cout << sum << " ";
//             cout << endl;
//         }
//     }
// }

void print_subarray(int arr[],int s,int e){

    for(int i=s; i<=e; i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void subarray(int arr[],int n){

    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){

            print_subarray(arr,s,e);
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    subarray(arr, n);

    return 0;
}
