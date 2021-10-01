Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *t1=head1,*t2=head2;
    Node *nl=NULL,*nl2=NULL;
    while(t1 && t2){
        if(t1->data<t2->data)
            t1=t1->next;
        else if(t1->data == t2->data){
            if(!nl){
                nl = new Node(t1->data);
                nl2=nl;
            }
            else{
                nl->next = new Node(t1->data);
                nl = nl->next;
            };
            t1 = t1->next;
            t2 = t2->next;
        }
        else
            t2=t2->next;
    }
    return nl2;
}

//Find intersection point
int count(Node *head){
    if(!head)
        return 0;
    return 1+count(head->next);
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1 = count(head1);
    int c2 = count(head2);
    
    Node* t = c1>=c2 ? head1:head2;
    Node* s = c1<c2 ? head1:head2;

    int d = abs(c1-c2);
    while(d--)
        t = t->next;
    
    while(t && s){
        if(t==s)
            return t->data;
        t = t->next;
        s = s->next;
    }
    return -1;
    
}