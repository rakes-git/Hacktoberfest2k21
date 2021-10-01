struct node* Iterative_reverse(struct node* head){
	node* prev = NULL,*cur = head,*nn;
	while(cur){
		nn = cur->next;
		cur->next = prev;
		prev = cur;
		cur = nn;
	}
	return prev;
}
