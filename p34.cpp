struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    node* prev=NULL;
    node* curr=head;
    node* nextnode;
    int counter=k;
    //Reverse the k nodes the address of last node to be reverse in nextnode
    while(counter-- && curr!=NULL){
        nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    //Run this reversal algorithm for next node upto k nodes
    if(head!=NULL) 
        head->next=reverse(nextnode,k);
    //The prev will contain the address before the first node
    /*In 1 2 3 4 5 6 7 8 k = 4
        After reversing prev will hold the address of 4 in one fun call
        In second call it will hold the address of 8
        So when backtrack happens we could be able to send the address of first kth element as head
    */
    return prev;
}
