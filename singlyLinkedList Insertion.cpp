#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    
};

void DataPrint(node * n){
        cout<<n->data<<endl;
        cout<<n->next<<endl;
        cout<<endl;
    }

void InsertAtHead(node * &head,int data){
    node *temp =new node(data);
    temp->next=head;
    head=temp;
}

void InsertAtEnd(node * & end,int data){
    node * temp = new node(data);
    end->next=temp;
    temp=end;
}

void InsertAtPos(node * head,int pos, int data){
    node * temp = head;
    int i=0;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    node * newNode = new node(data);
    newNode->next=temp->next;
    temp->next= newNode;
    
}

void print(node * head){
    node * temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
    
int main(){
    node * n1= new node(10);
    node * head= n1;
    
    node* n2=new node(20);
    n1->next=n2;
    
    node *n3 = new node(30);
    n2->next=n3;
    
    node *end=n3;
    print(head);
    
    cout<<endl;
    
    InsertAtHead(head,0);
    
    print(head);
    
    cout<<endl;
    InsertAtEnd(end,40);
    
    cout<<endl;
    
    print(head);
    
    InsertAtPos(head,2,55);
    
    cout<<endl;
    
    print(head);
    
    return 0;
}
