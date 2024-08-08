class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp=head;
        head=head->next;
        ListNode* prev=NULL;
        while(temp && temp->next){
            auto first=temp;
            auto second=temp->next;
            auto snext=second->next;
            first->next=snext;
            second->next=first;
            if(prev){
                prev->next=second;
            }
            prev=first;
            temp=temp->next;
        }
        return head;
    }
};