//Lakshay Singh
//1024030975
//2C71
//Assignment 10 Q5

#include <iostream>
#include <unordered_set>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){ data=x; next=NULL; }
};

bool hasLoop(Node* head){
    unordered_set<Node*> s;
    while(head){
        if(s.count(head)) return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    a->next=b; b->next=c; c->next=d; d->next=b;

    cout << (hasLoop(a) ? "true" : "false");
}
