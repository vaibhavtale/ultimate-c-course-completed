#include<iostream>
#include<climits>
using namespace std;

class node{
    public:

    int data;
    node *left;
    node *right;

    node(int val){
     
     data = val;
     left = NULL;
     right = NULL;
    }
};

struct info {
 
    int size;
    int min;
    int max;
    int ans;
    bool is_bst;
  
 };
 
  info largest_bst(node *root)
{
    if(root == NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }

    if(root->left == NULL && root->right == NULL)
    {
        return {1,root->data,root->data,1,true};
    }


    info leftinfo = largest_bst(root->left);
    info rightinfo = largest_bst(root->right);

    info curr;
    curr.size = (1 + leftinfo.size + rightinfo.size);

    if(leftinfo.is_bst && rightinfo.is_bst && leftinfo.max < root->data && rightinfo.min > root->data)
    {
        curr.min = min(leftinfo.min , min(rightinfo.min , root->data));
        curr.max = max(rightinfo.max , max(leftinfo.max , root->data));

        curr.ans = curr.size; 
        curr.is_bst = true;

        return curr;
    }

    curr.ans = max(leftinfo.ans , rightinfo.ans);
    curr.is_bst = false;

    return curr;
}



int main()
{
    node *root = new node(15);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(5);
    
    cout<<largest_bst(root).ans<<endl;

    return 0;
}