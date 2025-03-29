#include <bits/stdc++.h>
using namespace std;
class N
{
    public:
    int val;
    N* left;
    N* right;
    N (int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void preorder (N* root)
{
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder (N* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}
void inorder (N* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int main() {
    N* root=new N (40);
    N* a=new N (20);
    N* b=new N (60);
    N* c=new N (30);
    N* d=new N (10);
    N* e=new N (100);
    N* f=new N (67);
    N* g=new N (25);
    N* h=new N (55);
    N* i=new N (50);
//Connection
root->left=a;
root->right=b;
a->left=c;
a->right=d;
b->left=g;
b->right=h;
d->left=e;
d->right=f;
h->left=i;

cout << "Preorder: ";
preorder(root);
cout << endl;

cout << "Postorder: ";
postorder(root);
cout << endl;

cout << "Inorder: ";
inorder(root);
cout << endl;


    return 0;
}