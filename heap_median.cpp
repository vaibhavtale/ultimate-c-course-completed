#include<iostream>
#include<queue>
using namespace std;

priority_queue <int , vector<int>> maxq;

priority_queue <int , vector<int> , greater<int>> minq;

void insert(int x){

    if(maxq.empty() || x < maxq.top()){

        maxq.push(x);
    }
    else{

        minq.push(x);
    }

    if(maxq.size() > minq.size() + 1){

        minq.push(maxq.top());
        maxq.pop();
        
    }
    else if(minq.size() > maxq.size() + 1){

        maxq.push(minq.top());
        minq.pop();
        
    }
}

double find_median(){

    if(minq.size() == maxq.size()){

        return ( minq.top() + maxq.top()) / 2.0;
    }
    else if(minq.size() > maxq.size()){

        return minq.top();
    } 
    else{

        return maxq.top();
    }   
}

int main(){


      insert(5);
     cout<<find_median()<<endl;
      insert(2);
     cout<<find_median()<<endl;
      insert(3);
     cout<<find_median()<<endl;
      insert(6);
     cout<<find_median()<<endl;
      insert(1);
     cout<<find_median()<<endl;
      insert(4);
     cout<<find_median()<<endl;

    return 0;
}