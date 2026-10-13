#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
struct node{
    int data;
    node *left;
    node *right;
};
node *makeNode(int x){
    node *newNode = new node;
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void makeroot(node *root, int u, int v, char c){
    if(c == 'L'){
        root->left = makeNode(v);
    }
    else root->right = makeNode(v);
}
int ok = 0;
void insertNode(node *root, int u, int v, char c){
    if(root == NULL) return;
    if(ok) return;
    if(root->data == u){
        ok = 1;
        makeroot(root, u,v,c);
    }
    else{
        insertNode(root->left, u,v,c);
        insertNode(root->right, u,v,c);
    }
}
void spiral(node*root){
    stack<node*> st1, st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty()){
        while(!st1.empty()){
            node *tmp = st1.top(); st1.pop();
            cout << tmp->data << ' ';
            if(tmp->right != NULL){
                st2.push(tmp->right);
            }
            if(tmp->left != NULL){
                st2.push(tmp->left);
            }
        }
        while(!st2.empty()){
            node *tmp = st2.top(); st2.pop();
            cout <<tmp->data << ' ';
            if(tmp->left != NULL){
                st1.push(tmp->left);
            }
            if(tmp->right != NULL){
                st1.push(tmp->right);
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    node *root = NULL;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int u,v; char c;
        cin >> u >> v >> c;
        ok = 0;
        if(root == NULL){
            root = makeNode(u);
            makeroot(root,u,v,c);
        }
        else insertNode(root, u,v,c);
    }
    spiral(root);
}
//Tran Trong Nghia
