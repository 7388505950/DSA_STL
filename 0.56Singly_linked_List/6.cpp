/* CPP Program to move last element
to front in a given linked list */

#include <bits/stdc++.h>
using namespace std;

/* A linked list node */
class Node {
public:
	int data;
	Node* next;
};

int Count(Node *head ,int v)
{
    Node *temp=head;
    int count=0;
    while(temp !=NULL)
    {
       if(temp->data==v)
    {
        count++;
    }
      temp=temp->next;
    }
    return count;
   
}


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

/* Function to print nodes in a given linked list */
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

// Driver's code
int main()
{
	Node* start = NULL;

	
	push(&start, 5);
	push(&start, 3);
	push(&start, 3);
	push(&start, 2);
	push(&start, 3);

	// Function call
	
    cout<<"Count of 3 is = "<<Count(start,3);
	return 0;
}


