void solve(LinkedListNode<int> *&head,LinkedListNode<int>* current,LinkedListNode<int> *prev){
    if(head==NULL){
        return;
    }
  // LinkedListNode<int> *prev =NULL;
   
     if(current!=NULL){
        LinkedListNode<int> *forward = current->next;
         if(current->next!=NULL){
            head=forward;
         }
        
        current->next=prev;
        
        solve(head,forward,current);
        
     }
   
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{   
    LinkedListNode<int> *current=head;
    LinkedListNode<int> *prev=NULL;
    solve(head, current,prev);
     
    return head;
     
}
