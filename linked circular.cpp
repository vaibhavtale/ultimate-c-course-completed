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

void insertathead(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;                                                                                               
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {

        temp = temp->next;
    }

    temp->next = n;
    n->next = head;

    head = n;
}

void insertatPos(node *&head,int pos,int val){

     node *n = new node(val);

     node *temp = head;
     int count = 0;

     while(count != pos-1)
     {
         temp = temp->next;
         count++;
     }
      n->next = temp->next;
      temp->next = n;

}

void insertatTail(node *&head, int val)
{
    if (head == NULL)
    {

        insertathead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;

    while (temp->next != head)
    {

        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

void deleteathead(node *head)
{

    node *temp = head;

    while (temp->next != head)
    {

        temp = temp->next;
    }

    temp->next = head->next;
    node *todelete = head;
    head = head->next;

    delete todelete;
}

void deletion(node *&head, int pos)
{

    if (pos == 1)
    {

        deleteathead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while (count != pos - 1)
    {

        temp = temp->next;
        count++;
    }

    node *todelete = temp->next;

    temp->next = temp->next->next;
}

int main()
{

    node *head = NULL;

    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);

insertatPos(head,5,56);


    // insertathead(head, 6);

    // deletion(head, 4);

    display(head);

    return 0;
}