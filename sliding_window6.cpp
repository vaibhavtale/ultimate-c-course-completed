#include<iostream>
#include<math.h>
using namespace std;

bool is_palindrome(int n){
    
    int temp = n; 
    int number = 0;

    while(temp > 0){

        number = number*10 + temp%10;
        temp /= 10;
    }

    if(number == n){
        return true;
    }
    return false;
}

int find_palindrome(int arr[],int n, int k){
    int num = 0;

    for(int i=0; i<k; i++){

        num = num*10 + arr[i];
    }

    if(is_palindrome(num)){

        return 0;
    }

    for(int j=k; j<n; j++){

        num = (num % (int)pow(10,k-1))*10 + arr[j];

       if(is_palindrome(num)){

         return (j-k+1);
       }
    }
    return -1;

}

int main(){

    int n,k;

    int arr[] = {7,5,4,6,4,9};
    n = 6;
    k = 3;

    cout<<find_palindrome(arr,n,k)<<endl;

    return 0;
}