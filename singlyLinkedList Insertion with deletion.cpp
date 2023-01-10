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
    
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<" memory freed for value " << value << endl ;
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

void deleteNode(node* &head,int pos){
    if(pos==1){
        node * temp= head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node * current=head;
        node * prev= NULL;
        int i=0;
        
        while(i<pos-1){
            prev=current;
            current=current->next;
            i++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }
}

void print(node * head){
    node * temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    
    
    
    InsertAtHead(head,0);
    
    print(head);
    
    
    InsertAtEnd(end,40);
    

    
    print(head);
    
    InsertAtPos(head,2,55);
    
    print(head);
    
    deleteNode(head,3);
    
    print(head);
    
    return 0;
}
