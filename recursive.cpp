#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node *next;

  
  node(int val)
  {
      data = val;
      next = NULL;
  }
};


void insert(node *&head,int val)
{
    node *n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node *temp = head;

    while(temp->next != NULL){

        temp = temp->next;
    }
    temp->next = n;

}

void display(node *head)
{
    node *temp = head;
   
    if(temp != NULL){

        cout<<temp->data<<" ";
        display(temp->next);
    }
    else
    cout<<"NULL"<<endl;

}

// int count(node *head){

//     node *temp = head;
//     int ans = 0;

//     while(temp != NULL)
//     {
//         temp = temp->next;
//         ans++;
//     }

//     return ans;
// }

int count(node *head)
{
    node *temp = head;

    if(temp == NULL){

       return 0;
     }
     else
      return 1+count(temp->next);
}


// int add(node *head){

//     node *temp = head;
//     int sum = 0;

//     while(temp != NULL){

//         sum += temp->data;
//         temp = temp->next;

//     }

//     return sum;
// }

int add(node *head){

    node *temp = head;
    
    if(temp == NULL){
        return 0;
    }
    else
    return add(temp->next)+temp->data;
}

// int max(node *head){

//     node *temp = head;
//     int m = INT_MIN;

//     while(temp != NULL)
//     {
//         if(temp->data > m){

//             m = temp->data;
//         }
//         temp = temp->next;
//     }
//     return m;
// }


int max(node *head){

    node *temp = head;

    if(temp == NULL){
        return INT_MIN;
    }
    else{

       int x = max(temp->next);

       if(x > temp->data){
           return x;
       }
       else
       return temp->data;
    }
    
}


// node* search(node *head,int key)
// {

//     node *temp = head;

//     while(temp != NULL)
//     {
//         if(temp->data == key)
//         {
//             return temp;
//         }

//         temp = temp->next;
//     }
//     return NULL;
// }


bool checksorted(node *head)
{
    node *temp = head;
    int x = INT_MIN;

    while(temp != NULL)
    {
        if(temp->data < x)
        {
            return false;
        }
        else
        x = temp->data;
        temp = temp->next;

    }
    return true;
    
}


void removeduplicate(node *head)
{
    node *p = head->next;
    node *q = head;

    while(p != NULL)
    {
        if(q->data != p->data){
        q = p;
        p = p->next;
        }
        else{
        q->next = p->next;
        delete p;
        p = q->next;
        }
    }
     
}


node* search(node* head,int key)
{
    node *temp = head;

    if(temp == NULL)
    return NULL;

    else if(temp->data == key)
    return temp;

    else
    return search(temp->next,key); 

}


int main()
{
 node *head = NULL;

insert(head,1);
insert(head,2);
insert(head,2);
insert(head,4);
insert(head,3);
insert(head,3);
insert(head,7);

removeduplicate(head);

// cout<<search(head,3);

// cout<<checksorted(head);

// cout<<max(head)<<endl;

display(head);

// cout<<add(head)<<endl;

// cout<<count(head)<<endl;


    return 0;
}

