#ifndef EXTERNAL_HEAP_H
#define EXTERNAL_HEAP_H

#include <devices.h>

#include <assert.h>
#include <stdbool.h>

char __external_heap[EXTERNAL_HEAP_SIZE]; // todo: this creates heap on stack, not in PSRAM i need to fix this
size_t __external_heap_size = 0;

#define _PICO_EXTERNAL_HEAP_START_ADDRESS 0x2F000000
#define __mem_addr(x) ((size_t)((x)-_PICO_EXTERNAL_HEAP_START_ADDRESS))

void *ext_malloc(size_t size);
void ext_free(void *ptr);
void ext_collect(void);

#endif // EXTERNAL_HEAP_H