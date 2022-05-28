

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1 = head1, *temp2 = head2;
    SinglyLinkedListNode *head = 0;
    if(head1 == NULL)
        return head2;
    
    else if(head2 == NULL)
        return head1;
        
    else {
        if(temp1 -> data <= temp2 -> data) {
            head = temp1;
            head -> next = mergeLists(temp1 -> next, temp2);
        } else {
            head = temp2;
            head -> next = mergeLists(temp1, temp2 -> next);
        }
    }
    return head;
}

