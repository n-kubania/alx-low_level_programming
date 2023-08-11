#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free.
 * @ptr: Pointer to the memory block to reallocate.
 * @old_size: Size of the old memory block in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure or invalid input.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;
    

    if (new_size == 0 && ptr != NULL) {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL)
        return malloc(new_size);

    if (new_size <= old_size)
        return ptr;

    new_ptr = malloc(new_size);
    if (!new_ptr)
        return NULL;

    for (i = 0; i < old_size; i++)
        *((char *)new_ptr + i) = *((char *)ptr + i);

    free(ptr);

    return new_ptr;
}
