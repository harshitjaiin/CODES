    Node* sortList(Node *head)
   {
    int count0=0;
    int count1=0;
    int count2=0;
    Node* start=head;
    while(start!=NULL){
        if(start->data==1){
            count1++;
        }
        else if(start->data==0){
            count0++;
        }
        else{
            count2++;
        }
        start=start->next;
    }
    start=head;
    
    while(start!=NULL){
        if(count0>0){
            start->data=0;
            start=start->next;
            count0--;
        }
        else if(count1>0){
            start->data=1;
            start=start->next;
            count1--;
        }
        else if(count2>0){
            start->data=2;
            start=start->next;
            count2--;
        }
    }
return head;
