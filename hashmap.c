#include "hashmap.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

struct bucket{
    uint64_t hash:48;
    uint54_t dib:16;
};
struct hashmap {
    bool oom;
    size_t size;

};

static unit64_t get_hash(struct hashmap *map,void *key){

}

static hashmap *hashmap_new(size_t size) {
    hmmalloc(64)
}


