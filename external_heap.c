#include <external_heap.h>

void *ext_malloc(size_t size)
{
    assert(__external_heap_size + size <= EXTERNAL_HEAP_SIZE);
    void *result = __external_heap + __external_heap_size;
    __external_heap_size += size;
    return result;
}

void ext_free(void *ptr)
{
    (void)ptr;
    assert(false && "ext_free not implemented");
}

void ext_collect(void)
{
    assert(false && "ext_collect not implemented");
}