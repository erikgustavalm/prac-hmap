#include "hmap.h"


struct hmap {
	int *buckets;
	size_t size;
};

/* implement hashing algorithm */
static int hash_func(hmap_t *hmap, int n)
{

}


hmap_t *hmap_create(int initial_size)
{

}


void hmap_destroy(hmap_t *hmap)
{

}


char *hmap_lookup(hmap_t *hmap, int key)
{

}


void hmap_insert(hmap_t *hmap, int key, char *value)
{

}

char *hmap_remove(hmap_t *hmap, int key)
{

}

list_t *hmap_keys(hmap_t *hmap)
{

}
