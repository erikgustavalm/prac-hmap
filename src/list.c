#include "list.h"

typedef struct node {
	struct node *next;
	int val;
} node_t;

struct list {
	node_t *head;
	node_t *last;
	size_t size;
};

list_t *list_create()
{
	return NULL;
}

void list_destroy(list_t *list)
{

}

void list_prepend(list_t *list, int new)
{

}

void list_append(list_t *list, int new)
{

}

int list_pop(list_t *list)
{

}
