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
    if(c == 'L'){
        root->left = makeNode(v);
    }
    else root->right = makeNode(v);
}
int ok = 0;
void insertNode(node *root, int u, int v, int c){
    if(root == NULL) return;
    if(ok) return;
    if(root->val == u){
        ok = 1;
        makeroot(root, u,v,c);
    }
    else{
        insertNode(root->left, u,v,c);
        insertNode(root->right, u,v,c);
    }
}
void levelorder(node *root){
    queue<node*> q;
    q.push(root);
    cout << root->val << ' ';
    while(!q.empty()){
        auto tmp = q.front(); q.pop();
        if(tmp->left != NULL){
            q.push(tmp->left);
            cout << tmp->left->val << ' ';
        }
        if(tmp->right != NULL){
            q.push(tmp->right);
            cout << tmp->right->val << ' ';
        }
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--){
        node *root = NULL;
        int n; cin >> n;
        for(int i =1; i <= n; i++){
            int u,v; char c;
            cin >> u >> v >> c;
            ok = 0;
            if(root == NULL){
                root = makeNode(u);
                makeroot(root,u,v,c);
            }
           
            else  insertNode(root, u,v,c);
        }
        levelorder(root);
        cout << endl;
    }
}
//Tran Trong Nghia
