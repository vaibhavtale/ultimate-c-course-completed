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



// node *currptr = head;
// node *prevptr = NULL;
// node *nextptr;

// while(currptr != NULL){

// nextptr = currptr->next;
// currptr->next = prevptr;

// prevptr = currptr;
// currptr = nextptr;

// }

// return prevptr;

// }

// void deletehead(node *&head)
// {

//     node *todelete = head;

//     head = head->next;

//     delete todelete;
// }

// void deletion(node *&head, int val)
// {

//     node *temp = head;

//     while (temp->next->data != val)
//     {

//         temp = temp->next;
//     }

//     node *todelete = temp->next;
//     temp->next = temp->next->next;

//     delete todelete;
// }

void makecycle(node *&head, int pos)
{

    node *temp = head;
    node *startnode;

    int count = 1;

    while (temp->next != NULL)
    {

        if (count == pos)
        {

            startnode = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectcycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
         if (slow == fast)
        {

            return true;
        }
     

        slow = slow->next;
        fast = fast->next->next;
    
    return false;
    }
}

   
// node *reversek(node *&head, int k)
// {

//     node *currptr = head;
//     node *prevptr = NULL;
//     node *nextptr;

//     int count = 0;

//     while (currptr != NULL && count < k)
//     {

//         nextptr = currptr->next;
//         currptr->next = prevptr;

//         prevptr = currptr;
//         currptr = nextptr;
//         count++;
//     }

//     if (nextptr != NULL)
//     {
//         head->next = reversek(nextptr, k);
//     }

//     return prevptr;
// }

// 
void removecycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;

    } while (fast != slow);

    fast = head;

    while (slow->next != fast->next)
    {

        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main()
{

    node *head = NULL;

    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);

    makecycle(head, 3);

    cout << detectcycle(head) << endl;

    removecycle(head);

    //  node *newhead = reversek(head,2);

    //  display(newhead);

    // deletehead(head);

    // deletion(head,3);

    // display(head);

    return 0;
}