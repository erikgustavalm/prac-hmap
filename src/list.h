#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include "common.h"

typedef struct list list_t;

list_t *list_create();

void list_destroy(list_t *list);

void list_prepend(list_t *list, int new);

void list_append(list_t *list, int new);

int list_pop(list_t *list);

#endif /* LIST_H */
