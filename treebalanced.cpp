#include <iostream>
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

int height(node *root2)
{
    if (root2 == NULL)
    {
        return 0;
    }

    int lh = height(root2->left);
    int rh = height(root2->right);

    return max(lh, rh) + 1;
}

bool is_balanced(node *root2)
{
    if (root2 == NULL)
    {
        return true;
    }

    if (is_balanced(root2->left) == false)
    {
        return false;
    }

    if (is_balanced(root2->right) == false)
    {
        return false;
    }

    int lh = height(root2->left);
    int rh = height(root2->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    root->right->right->left = new node(8);

    node *root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(3);

    if (is_balanced(root2))
    {
        cout << "height of tree is balanced" << endl;
    }
    else
    {
        cout << "unbalanced" << endl;
    }
    return 0;
}