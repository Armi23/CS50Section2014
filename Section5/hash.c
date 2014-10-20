/**
 * Hash table implementation
 * By Armaghan Behlum
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(const char* word);

typedef struct node
{
	const char* word;
	struct node* next;
} node;

// Initialize hashtable
node* hashTable[50];


int main(int argc, char const *argv[])
{
	printf("Reading arguments\n");
	if (argc < 2)
	{
		printf("Usage: ./hash word word word ...\n");
		return 1;
	}

	printf("Making table\n");
	for (int i = 1; i < argc; ++i)
	{
		const char* word = argv[i];
		int hash_value = hash(word);


		if (hashTable[hash_value] == NULL) {
			hashTable[hash_value] = calloc(sizeof(node), 1);
		}

		node* new_node = calloc(sizeof(node), 1);

		new_node->word = word;
		new_node->next = hashTable[hash_value]->next;
		hashTable[hash_value]->next = new_node;
	}

	printf("Printing words\n");
	for (int i = 0; i < 50; ++i)
	{
		printf("Print length %d words: \n", i);
		node* cursor = hashTable[i];

		while (cursor != NULL)
		{
			if (cursor->word != NULL)
			{
				printf("%s\n", cursor->word);
			}

			cursor = cursor->next;
		}
	}

	return 0;
}

int hash(const char* word) {
	return strlen(word);
}