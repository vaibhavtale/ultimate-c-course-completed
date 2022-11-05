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

/*
     1  
    / \
   2   3
  / \ / \
4   5 6  7
  
   */

int calc_height(node *root)
{
    if(root == NULL)
    {
        return 0;
    }  

    return  max(calc_height(root->left) , calc_height(root->right)) + 1;

}

int calc_diameter(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    int lheight = calc_height(root->left);
    int rheight = calc_height(root->right);
    int curr_diameter = lheight + rheight + 1;

    int ldiameter = calc_diameter(root->left);
    int rdiameter = calc_diameter(root->right);

    return max(max(ldiameter,rdiameter),curr_diameter) ;

}

    int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    // root->right->right->left = new node(8);

    cout<<calc_diameter(root)<<endl;

    return 0;
}
