#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list node (changes) 
class Node  
{  
    public: 
    int data;  
    Node *next;  

    Node()
    {
        data = 0;
        next = NULL;
    }
  
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};  
  

  // Time complexity- O(n)
/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */
void push(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */ 
  
    /* 2. put in the data */  
  
    /* 3. Make next of new node as head */ 
  
    /* 4. move the head to point to the new node */

    Node* newNode = new Node(data);
  
    if (head == NULL) {
        head = newNode;
        return;
    }
  
    Node* temp = head;
    while (temp->next != NULL) {
          temp = temp->next;
    }
  
    temp->next = newNode;
}  
  
  // Time complexity- O(1)
/* Given a node prev_node, insert a new node after the given  
prev_node */
void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */ 
  
    /* 2. allocate new node */ 
  
    /* 3. put in the data */ 
  
    /* 4. Make next of new node as next of prev_node */
  
    /* 5. move the next of prev_node as new_node */ 

    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }
 
    Node* new_node = new Node();
 
    new_node->data = new_data;
 
    new_node->next = prev_node->next;
 
    prev_node->next = new_node;
}  

// Time complexity- O(n)  
/* Given a reference (pointer to pointer) to the head  
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */ 
  
    /* 2. put in the data */ 
  
    /* 3. This new node is going to be  
    the last node, so make next of  
    it as NULL*/  
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
  
    /* 5. Else traverse till the last node */
  
    /* 6. Change the next of last node */ 

    Node* new_node = new Node();
   
    Node *last = *head_ref;
   
    new_node->data = new_data; 
   
    new_node->next = NULL; 
   
    if (*head_ref == NULL) 
    { 
        *head_ref = new_node; 
        return; 
    } 

    while (last->next != NULL)
    {
        last = last->next; 
    }
   
    last->next = new_node; 
    return; 
}  
  
  // Time complexity- O(n)
// This function prints contents of 
// linked list starting from head  
void printList(Node *node)  
{  
    //Your code here
    Node* temp = head;
  
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
  
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}  
  
/* Driver code*/
int main()  
{  
    Node* head = NULL;   
    append(&head, 6);  
    push(&head, 7);  
    push(&head, 1);    
    append(&head, 4);    
    insertAfter(head->next, 8);  
    cout<<"Created Linked list is: ";  
    printList(head);  
    return 0;  
}  