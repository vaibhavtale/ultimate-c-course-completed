#include<bits\stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insert_bst(node *root,int val)
{
    if(root == NULL)
    {
        return  new node(val);
    }

    if(val < root->data)
    {
        root->left = insert_bst(root->left,val);
    }
    else{
        root->right = insert_bst(root->right,val);
    }

    return root;

}

bool check_bst(node *root,int min,int max)
{
    if(root == NULL)
    {
        return true;
    }

    if(root->data <= min || root->data >= max)
    {
        return false;
    }


    return (check_bst(root->left,min,root->data) && check_bst(root->right,root->data,max));
}


int main()
{
    
    node *root = NULL;
    root = insert_bst(root,5);
    insert_bst(root,1);
    insert_bst(root,3);
    insert_bst(root,4);
    insert_bst(root,2);
    insert_bst(root,7);

    cout<<check_bst(root,INT_MIN,INT_MAX)<<endl;

    return 0;
}