class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *f=head,*s=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};