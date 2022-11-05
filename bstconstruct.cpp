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

node *construct_bst(int preorder[],int *preorderidx,int key,int min,int max,int n)
{
    if(*preorderidx >= n)
    {
        return NULL;
    }

    node *root = NULL;

    if(key > min && key < max)
    {
        root = new node(key);  
        preorderidx = preorderidx + 1;  
    

    if(*preorderidx < n)
    {
       root->left = construct_bst(preorder,preorderidx,preorder[*preorderidx],min,key,n); 
    }

    if(*preorderidx < n)
    {
        root->right = construct_bst(preorder,preorderidx,preorder[*preorderidx],key,max,n);

    }

    }
    return root;
}

void preorder(node *root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    int preorder[] = {10,2,1,13,11};
    int preorderidx = 0;
    int n = 5;

   node *root =  construct_bst(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
   preorder(root);

    return 0;
}