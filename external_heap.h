#ifndef EXTERNAL_HEAP_H
#define EXTERNAL_HEAP_H

#include <devices.h>

#include <stdio.h>
#include <assert.h>

char __external_heap[EXTERNAL_HEAP_SIZE];
size_t __external_heap_index = 0;
size_t __external_heap_size = 0;

#define _PICO_EXTERNAL_HEAP_START_ADDRESS 0x
#define __mem_addr(x) ((size_t)(x - ))

void *ext_malloc(size_t size)
{
}

#endif // EXTERNAL_HEAP_H