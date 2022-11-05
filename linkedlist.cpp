#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {

        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {

        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->next = n;
}

void insertathead(node *&head, int val)
{

    node *n = new node(val);

    n->next = head;

    head = n;
}

void insertatSorted(node *head,int val)
{
    node *n = new node(val);

    node *p = head;
    node *q = NULL;

    while(p != NULL && p->data < val)
    {
      q = p;
      p = p->next;
    }

    n->next = q->next;
    q->next = n;
    

}

void display(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {

        cout << temp->data << "->";

        temp = temp->next;
    }
    cout << "NULL" << endl;
}


bool search(node *&head,int key){

    node *temp = head;

    while(temp!=NULL){

        if(temp->data == key){

            return true;
        }

        temp = temp->next;
    }
    return false;
}

int main()
{

    node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);

    insertatSorted(head,3);

    // cout<<search(head,6)<<endl;

    // insertathead(head, 44);

    display(head);

    return 0;
}