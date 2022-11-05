#include<iostream>
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

node *delete_bst(node *root,int key)
{
    if(root == NULL)
    {
        return root;
    }

    if(root->data < key)
    {
        root->left = delete_bst(root->left,key);
    }

    else if(root->data < key)
    {
        root->right = delete_bst(root->right,key);
    }

    else{

        if(root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        else if(root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else{

            
        }
    }
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

    return 0;
}