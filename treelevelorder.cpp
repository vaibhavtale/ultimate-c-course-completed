#include <bits\stdc++.h>
using namespace std;

struct node
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

// void levelorder(node *root)
// {
//   if(root == NULL)
//   {
//       return;
//   }

//   queue<node*> q;
//   q.push(root);
//   q.push(NULL);

//   while(!q.empty())
//   {
      
//       node *node = q.front();
//       q.pop();

//       if(node !=NULL)
//       {
//           cout<<node->data<<" ";

//           if(node->left){

//               q.push(node->left);
//           }

//           if(node->right){

//               q.push(node->right);
//           }

//       }

//       else if(!q.empty())
//       {
//           q.push(NULL);
//       }
      
//   }
// }


int levelsum(node *root,int k)
{
    if(root == NULL)
    {
        return -1;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty())
    {
        node *node = q.front();
        q.pop();

        if(node != NULL)
        {

            if(level == k)
            {
                sum += node->data;
            }
            
            if(node->left)
            {
                q.push(node->left);
            }

            if(node->right)
            {
                q.push(node->right);
            }
        }

        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }

    return sum;
}


int countnodes(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    return countnodes(root->left) + countnodes(root->right) + 1;
}


int countsum(node *root)
{
    if(root == NULL)
    {
        return 0;
    }

    return countsum(root->left) + countsum(root->right) + root->data;
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    // levelorder(root);
    // cout<<levelsum(root,2)<<endl;
    // cout<<countnodes(root)<<endl;
    cout<<countsum(root)<<endl;


    return 0;
}