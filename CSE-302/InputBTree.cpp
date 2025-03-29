#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
}; // Binary Tree এর Node এর নীল নকশা 


Node *input_tree() // একটি ফাংশন তৈরি করা হয়েছে। যা একটি Binary Tree input নিয়ে তার Root Node এর এড্রেস রিটার্ন করবে
{
    int val;
    cin >> val; // প্রথমে Root Node এর ভ্যালু ইনপুটে নিলাম 
    Node *root;  
    if (val == -1) // যদি Root -1 হয় তবে Root টি Null হবে অর্থাৎ Binary Tree টি empty
        root = NULL;
    else
        root = new Node(val); // Otherwise ঐ Node টি হলো Root Node
    
    queue<Node *> q; // এরপর বাকি প্রসেস Queue এর সাহায্যে করার জন্য আমরা একটি Node এর Queue নিলাম 
    

    if (root) 
        q.push(root); // এরপর Root Node কে queue তে পুশ করলাম 
    while (!q.empty())
    {
        // এরপর একটি একটি Node পিক করতে থাকবো 
        Node *p = q.front(); // প্রথমে শুরুতে যে Node আছে তাকে পিক করলাম
        q.pop();

        // যেহেতু এই Node এর সাথে তার Child গুলোকে কানেক্ট করা লাগবে , তাই এর child গুলো ইনপুট নেয়া হচ্ছে
        int l, r;
        cin >> l >> r;

       // দুটি Node পয়েন্টার তৈরি করা হয়েছে যা ঐ picked নোড এর children দের এড্রেস রাখবে
        Node *myLeft; 
        Node *myRight;
        
        // l এর মান -1 হলে , ঐ Node এর কোনো left children নেই 
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l); // Otherwise left Node ক্রিয়েট করা হয়েছে

        // r এর মান -1 হলে , ঐ Node এর কোনো right children নেই 
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r); // Otherwise right Node ক্রিয়েট করা হয়েছে

        p->left = myLeft; // picked Node এর left এ left child কানেক্ট করা হয়েছে 
        p->right = myRight; // picked Node এর left এ right child কানেক্ট করা হয়েছে 

        // এরপর ঐ Children গুলোকে লাইনে দাড় করানো হয়েছে। 
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root; // সবশেষে Root Node টি রিটার্ন করা হয়েছে। 
}


int main()
{
    Node *root = input_tree();
    return 0;
}