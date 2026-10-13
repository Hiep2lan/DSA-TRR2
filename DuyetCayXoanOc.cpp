#include <bits/stdc++.h>
#define endl "\n"
// #define int long long
using namespace std;
typedef long long ll;
struct node{
    int val;
    node *left;
    node *right;
};
node *makeNode(int x){
    node *newNode = new node;
    newNode->val = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void makeroot(node *root, int u, int v, char c){
    if(c == 'L') root->left = makeNode(v);
    else root->right = makeNode(v);
}
int ok = 0;
void insertNode(node *root, int u , int v, char c){
    if(root == NULL) return;
    if(ok) return;
    if(root->val == u){
        ok =1;
        makeroot(root, u,v,c);
    }
    else{
        insertNode(root->left, u,v,c);
        insertNode(root->right, u,v,c);
    }
}
void spiral(node*root){
    stack<node*> s1,s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            auto tmp = s1.top(); s1.pop();
            cout << tmp->val << ' ';
            if(tmp->right != NULL) s2.push(tmp->right);
            if(tmp->left != NULL) s2.push(tmp->left);
        }
        while(!s2.empty()){
            auto tmp = s2.top(); s2.pop();
            cout << tmp->val << ' ';
            if(tmp->left != NULL) s1.push(tmp->left);
            if(tmp->right != NULL) s1.push(tmp->right);
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        node*root = NULL;
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            int u,v; char c;
            cin >> u >> v >> c;
            ok = 0;
            if(root == NULL){
                root = makeNode(u);
                makeroot(root,u,v,c);
            }
            else insertNode(root,u,v,c);
        }
        spiral(root);
        cout << endl;
    }
}
//Tran Trong Nghia
