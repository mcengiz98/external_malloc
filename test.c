#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <external_heap.h>

int main(void){
    char * root = ext_malloc(26);
    for (size_t i = 0; i < 26; ++i)
    {
        root[i] = 'a' + i;
    }

    ext_free(root);

    return 0;
}