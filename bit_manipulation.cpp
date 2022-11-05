#include<iostream>
using namespace std;

int get_bit(int n,int pos){

   if (((n & (1<<pos)) != 0)){

    return 1;
   }
   return 0;
   
}

int set_bit(int n,int pos){

    return (n | (1<<pos));
}

int clear_bit(int n,int pos){

    int mask = ~(1<<pos);

    return (n & mask);
}

int update_bit(int n, int pos){

    int mask = ~(1<<pos);

    int number = (n & mask);

    1<<pos;

    return(n | number);
}

int main(){

     cout<<get_bit(2,1)<<endl;
    // cout<<set_bit(5,1)<<endl;

    // cout<<clear_bit(5,1)<<endl;
    // cout<<update_bit()

    return 0;
}