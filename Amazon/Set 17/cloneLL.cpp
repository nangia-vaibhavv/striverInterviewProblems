/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node *curr=head;
//         while loop to establish links
        while(curr!=NULL)
        {
            Node *temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        curr=head;
//       set romdom pointers  
        while(curr!=NULL)
        {
            if(curr->next!=NULL)
            {
                curr->next->random=(curr->random)!=NULL ? curr->random->next : NULL;
            }
            curr=curr->next->next;
        }
//     separate these two LL
        Node * original=head;
        Node *copy=head->next;
        Node *temp=copy;
        while(original!=NULL)
        {
            original->next=original->next->next;
            copy->next=copy->next->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }
};