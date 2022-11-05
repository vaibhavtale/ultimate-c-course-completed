#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

class node{
    public:

    int data;
    node* left;
    node* right;

    node(int val){

        data = val;
        left = NULL;
        right = NULL;
    }
};

void topveiw(node* root){

    queue<pair<node*,int>> q;
    map<int,int> mp;

    if(root == NULL){
        
        cout<<"NULL"<<endl;
    }

    q.push({root,0});

    while(!q.empty()){

        auto temp = q.front();
        q.pop();

        node* ff = temp.first;
        int dist = temp.second;

       if(mp.find(dist) == mp.end()) mp[dist] = ff->data;

        if(ff->left != NULL){

            q.push({ff->left,dist-1});
        }

        if(ff->right != NULL){

            q.push({ff->right,dist+1});
        }

    }

    map<int,int> :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){

        cout<<it->second<<" "<<endl;
    }

}

int main(){


    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(6);

    topveiw(root);
}