#ifndef HMAP_H
#define HMAP_H

#include <stdlib.h>

#include "common.h"
#include "list.h"

typedef struct hmap hmap_t;

/* Create a hashmap with initial_size nr of buckets */
hmap_t *hmap_create(int initial_size);

/* Destroy hmap and clean up all memory used */
void hmap_destroy(hmap_t *hmap);

/* Check if hmap contains a Key, Value pair with Key = key
   and return the value associated with key. */
char *hmap_lookup(hmap_t *hmap, int key);

/* Insert (key,value) into hmap. */
void hmap_insert(hmap_t *hmap, int key, char *value);

/* Remove key,value pair from hmap */
char *hmap_remove(hmap_t *hmap, int key);

/* Return a list of all keys in hmap */
list_t *hmap_keys(hmap_t *hmap);


#endif /* HMAP_H */
