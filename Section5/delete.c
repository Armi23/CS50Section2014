/**
 * How to delete from a linked list
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

	// We are going to delete the node with this value 
	int x = 20;

	// Iterate through list and stop at the node before the one we delete
	cursor = head;
	while (cursor->next != NULL && cursor->next->i != x) {
		cursor = cursor->next;
	}

	// ??? Why do we need to check ???
	if (cursor->next == NULL) {
		return 1;
	}

	// Make temporary pointer to value to delete
	node* temp = cursor->next;

	// Make new link that skips node to delete
	cursor->next = cursor->next->next;

	// Free or "delete" node
	free(temp);

	// Print out the values in the linked list again
	cursor = head;
	while (cursor != NULL) {
		printf("%d\n", cursor->i);
		cursor = cursor->next;
	}

	return 0;
}