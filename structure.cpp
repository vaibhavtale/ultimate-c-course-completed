#include<iostream>
using namespace std;

struct rectangle{

    int length;
    int breadth;


// int area(int length,int breadth){

//     int area = length * breadth;

//     return area;
// }

};


int main()
{

struct rectangle a;
struct rectangle *p = &a;

p->length = 20;
p->breadth = 30;


// a.length = 10;
// a.breadth = 5;

// int area = a.length * a.breadth;

// cout<<a.area(10,5)<<endl;

cout<<p->length<<","<<p->breadth<<endl;

    return 0;
}