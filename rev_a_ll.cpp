

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist == 0 or llist -> next == 0)
        return llist;
    
    SinglyLinkedListNode* ptr = llist -> next;
    llist -> next = NULL;
    
    SinglyLinkedListNode* temp = reverse(ptr);
    ptr -> next = llist;
    
    return temp;
}

