

/*
 * Complete the 'removeDuplicates' function below.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp = llist;
    
    if(llist == NULL or llist -> next == 0) return llist;
    
    while(temp != 0 and temp -> next != 0) {
        if(temp -> data == temp -> next -> data) {
            temp -> next = temp -> next -> next;
        }
        else {
            temp = temp -> next;
        }
    }
    
    return llist;
}

