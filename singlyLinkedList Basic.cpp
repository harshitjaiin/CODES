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
    
int main(){
    node * n1= new node(10);
    
    node* n2=new node(20);
    n1->next=n2;
    
    node *n3 = new node(30);
    n2->next=n3;
    
    DataPrint(n1);
    DataPrint(n2);
    DataPrint(n3);
    
    
    
    return 0;
}
