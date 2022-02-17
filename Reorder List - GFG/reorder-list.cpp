// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node* head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}
// } Driver Code Ends


/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node* mid(Node* head) {
    if(head == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* reverse(Node* head) {
    if(head == NULL) return NULL;
    Node* curr = head;
    Node* prev = NULL;
    Node* temp;
    while(curr != NULL) {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}


void reorderList(Node* head) {
    Node* l = mid(head);
    Node* r = l->next;
    l->next = NULL;
    r = reverse(r);
    Node* p1 = head;
    Node* p2 = r;
    
    while(p1 != NULL && p2 != NULL) {
        Node* temp1 = p1->next;
        Node* temp2 = p2->next;
        
        p1->next = p2;
        p2->next = temp1;
        p1 = temp1;
        p2 = temp2;
    }
    //return head;
}