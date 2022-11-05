#include<iostream>

using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int val){

        data = val;
        left = right = NULL;
    }
};

class solution{

    public:

    node* insert(node* root,int data){

        if(root == NULL){

            return new node(data);
        }

       else{
        node* curr;
        if(data <= root->data){

            curr = insert(root->left,data) ;
            root->left = curr;
        }
        else{
            curr = insert(root->right,data);
            root->right = curr;
        }

       }

       return root;
    }
};

void postorder(node* root){

    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<(root->data)<<" ";
}

signed main(){

    solution mytree;
    node* root = NULL;

    int t;
    int data;
    cin>>t;

    while(t > 0){

        cin>>data;
       root =  mytree.insert(root,data);
        t--;
    }

    postorder(root);


    return 0;
}