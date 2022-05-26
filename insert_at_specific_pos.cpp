

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    int n = 1;
    SinglyLinkedListNode* ptr = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = llist;
    while(temp != 0 and n <= position-1) {
        temp = temp-> next;
        n++;
    }
    ptr -> next = temp -> next;
    temp -> next = ptr;
    
    return llist;
}

