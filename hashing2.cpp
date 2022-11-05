#include<iostream>
#include<map>
#include<vector>
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

void get_vertical(node* root,int hd,map <int,vector<int>> mp){

if(root == NULL){
   return; 
}

 mp[hd].push_back(root->data);
 get_vertical(root->left,hd-1,mp);
 get_vertical(root->right,hd+1,mp);

}

signed main(){
    
    map<int, vector<int>> mp;

    int hd = 0;

    node* root = new node(10);
    root->left = new node(7);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(1);
    root->right->right = new node(9);

    get_vertical(root,hd,mp);

    map<int,vector<int>> :: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){

        for(auto i : it->second){

            cout<<i<<endl;
        }
        // for(int i=0; i<(it->second).size(); i++){

        //     cout<<(it->second)[i]<<" ";
        // }
        // cout<<endl;
    }

    return 0;
}