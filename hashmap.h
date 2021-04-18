#ifndef HASHMAP_H
#define HASHMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdin.h>

struct hashmap;

struct hashmap_new();

void hashmap_free(struct hashmap *map);

void hashmap_clear(struct hashmap *map);

size_t hashmap_size(struct hashmap *map);

void *hashmap_get(struct hashmap *map);

void *hashmap_set(struct hashmap *map);

void *hashmap_del(struct hashmap *map);

#endif
