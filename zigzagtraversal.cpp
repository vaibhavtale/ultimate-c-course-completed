#include<iostream>
#include<stack>
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

void zigzag_traversal(node *root)
{
    if(root == NULL)
      {
          return;
      }

  stack <node*> curr_level;
  stack <node*> next_level;

  bool left_to_right = true;

  curr_level.push(root);

  while(!curr_level.empty())
  {
      
      node *temp = curr_level.top();
      curr_level.pop();

      if(temp)
      {
         cout<<temp->data<<" ";

             if(left_to_right)
             { 
                 if(temp->left)
                 {
                 next_level.push(temp->left);
                 } 
             if(temp->right)
             {
                 next_level.push(temp->right);

             }
            }

             else{
                  if(temp->right){
                 next_level.push(temp->right);

                }
              
                 if(temp->left){
                 next_level.push(temp->left);
                } 
             }
         
      }

      if(curr_level.empty())
      {
          left_to_right = !left_to_right;
          swap(curr_level,next_level);
      }
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

    zigzag_traversal(root);

    return 0;
}