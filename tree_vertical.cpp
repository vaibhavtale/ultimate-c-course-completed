#include<iostream>
#include<map>
#include<vector>
using namespace std;

 #define vi vector<int>
 #define ss second
 #define ff first

class node{

    public:

    int key;
    node* left;
    node* right;

    node(int val)
    {
        key = val;
        left = right = NULL;
    }

};

void print_vertical(node*root,int hdis,map<int,vi> &m)
{
    if(root == NULL)
    {
        return;
    }

    m[hdis].push_back(root->key);
    print_vertical(root->left,hdis-1,m);
    print_vertical(root->right,hdis+1,m);
}

int main()
{
    node* root = new node(10);
    root->left = new node(7);
    root->right = new node(4);
    root->left->left = new node(3);
    root->left->right = new node(11);
    root->right->left = new node(14);
    root->right->right = new node(6);
 
    map<int,vector<int>> m;

    int hdis = 0;

    print_vertical(root,hdis,m);

    map<int,vi> :: iterator it;

    for(it=m.begin(); it!=m.end(); it++)
    {
       for(int i=0; i<(it->ss).size(); i++)
       {
           cout<<(it->ss)[i]<<" "<<endl;
       }
    }

    return 0;
}