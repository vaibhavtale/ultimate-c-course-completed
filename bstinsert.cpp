#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right  = NULL;
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

void print_inorder(node *root)
{
    if(root == NULL)
    {
        return;
    }

    print_inorder(root->left);
    cout<<root->data<<" ";
    print_inorder(root->right);

}

bool search_bst(node *root,int key)
{
    
    if(root == NULL)
    {
         return false;
    }

    if(root->data == key)
    {
        return true;
    }

    if(key < root->data)
    {
       return search_bst(root->left,key);
    }
    else{
        return search_bst(root->right,key);
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

    // print_inorder(root);

    cout<<search_bst(root,9)<<endl;

    return 0;
}