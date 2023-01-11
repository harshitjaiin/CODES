Node *findMiddle(Node *head) {
    // Write your code here
    Node * temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    delete temp;
    Node * ans =head;
    size=(size/2)+1;
    int i=0;
    while(i<size-1){
        ans=ans->next;
        i++;
    }
    return ans;
}
