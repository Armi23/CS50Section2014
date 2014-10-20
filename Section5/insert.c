/**
 * How to insert into a linked list
 * By Armaghan Behlum
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int i;
	struct node* next;
} node;

int main(int argc, char const *argv[])
{
	node* head = malloc(sizeof(node));
	head->i = 0;
	node* cursor = head;

	for (int i = 10; i <= 100; i += 10)
	{
		cursor->next = calloc(sizeof(node), 1);

		if (cursor->next == NULL) 
		{
			return 1;
		}

		cursor = cursor->next;
		cursor->i = i;
	}

	// We are goign to insert this new value into the linked list
	int x = 25;

	// Iterate through list and stop at the node after which we will insert item
	cursor = head;
	while (cursor->next != NULL && cursor->next->i <= x) {
		cursor = cursor->next;
	}

	// Make new node for new element to insert
	node* new_node = malloc(sizeof(node));
	new_node->i = x;

	// New node will point at the rest of the list
	new_node->next = cursor->next;

	// Have cursor point to new node thereby completing linked list
	cursor->next = new_node;

	// Print out the values in the linked list again
	cursor = head;
	while (cursor != NULL) {
		printf("%d\n", cursor->i);
		cursor = cursor->next;
	}

	return 0;
}