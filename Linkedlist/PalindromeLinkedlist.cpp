class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* p= head;
        while(p!=NULL) {
        s.push(p->val);
        p = p->next;
        }
        while (head && !s.empty()){
            if (s.top()!=head->val)
                return false;
            else{
            s.pop();
            head=head->next;
            }
        }
    return true;
        }
    };
