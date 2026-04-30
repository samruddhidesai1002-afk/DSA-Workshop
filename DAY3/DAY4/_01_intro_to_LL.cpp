#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*node;
};

void insert(int val){
   Node*temp=new Node();
   temp->data=val;
   temp->next=node;

   Node=temp;
}

void printLL(Node*head){

    while(head->next !=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

    cout<<endl;
}
int main(){

    Node*head=new Node();

    insert(5);
    insert(-3);
    insert(7);

    printLL(node);
    return 0;
}