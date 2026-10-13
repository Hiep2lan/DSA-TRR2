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
    node*newNode = new node;
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;;
}
void makeroot(node *root, int u,int v, char c){
    if(c == 'L') root->left = makeNode(v);
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
        insertNode(root->left, u, v,c);
        insertNode(root->right, u, v,c);
    }
}
void levelorder(node *root){
    queue<node*> q;
    q.push(root);
    cout << root->data << ' ';
    while(!q.empty()){
        auto tmp = q.front(); q.pop();
        if(tmp->left != NULL){
            q.push(tmp->left);
            cout << tmp->left->data << ' ';   
        }
        if(tmp->right != NULL){
                q.push(tmp->right);
                cout << tmp->right->data << ' ';
        }    
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    node *root = NULL;
    int n; cin>> n; 
    for(int i = 1; i <= n; i++){
        int u,v; char c;
        ok = 0;
        cin >> u >> v >> c;
        if(root == NULL){
            root = makeNode(u);
            makeroot(root, u,v,c);
        }
        else insertNode(root, u, v, c);
    }
    levelorder(root);
}
//Tran Trong Nghia
