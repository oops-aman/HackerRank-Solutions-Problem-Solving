

/*
 * Complete the 'reversePrint' function below.
 *
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

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp = llist;
    if(temp -> next == NULL) {
        cout << temp -> data << endl;
        return;
    } else {
        reversePrint(temp -> next);
        cout << temp -> data << endl;
    }
}

