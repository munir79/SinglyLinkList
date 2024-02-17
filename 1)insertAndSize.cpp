#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void printLinkedList(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void insert_at_position(Node *head,int pos,int val){
    Node *NewNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
      tmp=tmp->next;
    }
    NewNode->next=tmp->next;
    tmp->next=NewNode;
    

}
int size(Node *head){
    Node *tmp=head;
    int count=0;
    while(tmp !=NULL){
       count++;
       tmp=tmp->next;
    }
    return count;
}
int main() {
    Node *head = new Node(0); // Allocate memory for head
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    head->next = a;
    a->next = b;
    b->next = c;
    printLinkedList(head);
    cout<<endl;
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"invalid Index"<<endl;
    }
    else{
        insert_at_position(head,pos,val);
    }
  
     printLinkedList(head);
    

    return 0;
}
