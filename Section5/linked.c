/**
 * Simple Linked List initialization
 * By Armaghan Behlum
 */

#include <stdio.h>
#include <stdlib.h>

// A node holds data and a pointer to another node
typedef struct node
{
	int i;
	struct node* next;
} node;

int main(int argc, char const *argv[])
{
	// Your linked lists should always have a head
	node* head = malloc(sizeof(node));
	head->i = 0;

	// To iterate through a linked list, you need a pointer to keep track of
	// where you are in the linked list
	node* cursor = head;
	for (int i = 1; i <= 10; i++)
	{
		// Initialize a new node for the linked list
		cursor->next = calloc(sizeof(node), 1);

		// Check that calloc returned properly
		if (cursor->next == NULL) 
		{
			return 1;
		}

		// Set pointer to point to new node and update value
		cursor = cursor->next;
		cursor->i = i;
	}

	// We can now use the curson idea again to go through the whole list
	cursor = head;
	while (cursor != NULL) {
		printf("%d\n", cursor->i);
		cursor = cursor->next;
	}

	return 0;
}