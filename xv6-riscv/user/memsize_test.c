#include "kernel/types.h"
#include "user/user.h"

int main() {
    uint64 initial_size, after_allocation_size, after_free_size;
    void *allocated_memory;

    // Step (a): Print initial memory size
    initial_size = memsize();
    printf("Initial memory size: %d bytes\n", initial_size);

    // Step (b): Allocate 20 KB of memory
    allocated_memory = malloc(20000);
    if (allocated_memory == 0) {
        printf("Failed to allocate memory\n");
        exit(1);
    }

    // Step (c): Print memory size after allocation
    after_allocation_size = memsize();
    printf("Memory size after allocation: %d bytes\n", after_allocation_size);

    // Step (d): Free the allocated memory
    free(allocated_memory);

    // Step (e): Print memory size after freeing
    after_free_size = memsize();
    printf("Memory size after freeing: %d bytes\n", after_free_size);

    // Exit the program
    exit(0);
}