//Lakshay Singh
//1024030975
//2C71
//Assignment 10 Q6

#include <iostream>
#include <unordered_set>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){ data=x; left=right=NULL; }
};

bool check(Node* root, unordered_set<int>& s){
    if(!root) return false;
    if(s.count(root->data)) return true;
    s.insert(root->data);
    return check(root->left,s) || check(root->right,s);
}

int main(){
    Node* a=new Node(5);
    Node* b=new Node(3);
    Node* c=new Node(7);
    Node* d=new Node(3);
    a->left=b; a->right=c; b->left=d;

    unordered_set<int> s;
    if(check(a,s)) cout<<"Duplicates Found";
    else cout<<"No Duplicates";
}
