LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{   
    LinkedListNode<int> *current =head;
    LinkedListNode<int> *prev = NULL;
    
     int size=0;
    while(current!=NULL){
        LinkedListNode<int> *forward = current->next;
       
        current->next=prev;
        
        prev=current;
         
        current= forward;
        
    }
     
    return prev;
     
}
