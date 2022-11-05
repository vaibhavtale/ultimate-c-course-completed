#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {

        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertathead(node *&head, int val)
{

    node *n = new node(val);

    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void insert(node *&head, int val)
{

    if (head == NULL)
    {

        insertathead(head, val);
        return;
    }

    node *n = new node(val);

    node *temp = head;

    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
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

    void deleteathead(node * &head)
    {

        node *todelete = head;
        head->next = head;
        head->prev = NULL;
    }

    void deletion(node * &head, int pos)
    {

        if (pos == 1)
        {

            deleteathead(head);

            return;
        }

        node *temp = head;
        int count = 1;

        while (temp != NULL && count != pos)
        {

            temp = temp->next;
            count++;
        }

        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }

        temp->prev->next = temp->next;
    }

    int main()
    {

        node *head = NULL;

        insert(head, 1);
        insert(head, 2);
        insert(head, 3);
        insert(head, 4);
        insert(head, 5);

        deletion(head, 3);

        display(head);

        return 0;
    }