

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    int n = 1;
    if(position == 0) {
        SinglyLinkedListNode* t = llist;
        llist = llist -> next;
        free(t);
    } else {
        SinglyLinkedListNode* temp = llist;
    SinglyLinkedListNode* ptr = llist;
    while(temp != 0 and n < position) {
        temp = temp -> next;
        ptr = ptr -> next;
        n++;
    }
    ptr = ptr -> next;
    temp -> next = ptr -> next;
    ptr -> next = NULL;
    free(ptr);
    }
    return llist;
}

