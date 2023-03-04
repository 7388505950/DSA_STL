#include <bits/stdc++.h>
using namespace std;
 
/* Link list node */
class Node
{
    public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
             
    /* put in the data */
    new_node->data = new_data;
                 
    /* link the old list of the new node */
    new_node->next = (*head_ref);    
         
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
void Swap_Pair_wise(Node* head)
{
  Node* temp=head;
  while(temp !=NULL && temp->next !=NULL)
  {
    swap(temp->data,temp->next->data);
      temp=temp->next->next;
  }
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
    while (node!=NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}
 
/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
     
    /* Let us create a sorted linked list to test the functions
    Created linked list will be 11->11->11->13->13->20 */
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);                                    
 
    cout<<"Linked list before swap " << endl;
    printList(head);
 
    /* Remove duplicates from linked list */
    Swap_Pair_wise(head);
 
    cout<<"\nLinked list after swap "<< endl;    
    printList(head);            
     
    return 0;
}