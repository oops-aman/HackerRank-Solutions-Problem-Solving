

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int count = 0;
    SinglyLinkedListNode* curr = llist, *res = llist;
    while(curr != 0) {
        curr = curr -> next;
        if(count++ > positionFromTail) {
            res = res -> next;
        }
    }
    return res -> data;
}

