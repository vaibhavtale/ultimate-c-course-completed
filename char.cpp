#include<iostream>
using namespace std;

// to print a character array or to access all the elements present inside that array     


int main()
{
    char a[100]="oye bhai kidhar";
    int i=0;

//  \0 is a null value wich indicates the end of char array to compiler


    while(a[i] != '\0'){

cout<<a[i]<<endl;

// this will printout all the cha racters in between index 0 upto \0 null value
i++;
    }

    return 0;
}