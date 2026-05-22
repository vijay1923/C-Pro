// This code implements a dynamic array in C, 
// allowing for resizing and basic operations like push, pop, and delete.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  // Define a structure for the dynamic array
{
    int *data; // Pointer to the array data
    size_t size;  // Current number of elements in the array
    size_t capacity;  // Total capacity of the array (how many elements it can hold before resizing)
} dynamic_array; // Define the dynamic array structure

dynamic_array* create_dynamic_array() // Function to create and initialize a new dynamic array
{
    printf("Creating dynamic array\n");
    dynamic_array *self = malloc(sizeof(dynamic_array));
    if (!self) return NULL;

    self->size = 0;
    self->capacity = 10;
    self->data = calloc(self->capacity, sizeof(int));

    if (!self->data)
    {
        free(self);
        return NULL;
    }

    return self;   // Return the pointer to the newly created dynamic array
}

int* dynamic_array_at(dynamic_array *self, size_t i)    // Function to access an element at a specific index in the dynamic array
{
    printf("Accessing element at index %zu\n", i);
    if (i < self->size)
    return &self->data[i];

    return NULL; // Return NULL if the index is out of bounds
}

void int_array_push(dynamic_array *self, int value) // Function to add an element to the end of the dynamic array
{

    printf("Pushing value: %d\n", value);
    if (self->size == self->capacity)
    {
        self->capacity *= 2;
        int *temp = realloc(self->data, self->capacity * sizeof(int)); // Attempt to resize the array
        if (!temp) return; // handle failure safely
        self->data = temp;
    }

    self->data[self->size++] = value; // Add the new value to the end of the array and increment the size
}

void int_array_pop(dynamic_array *self) /// Function to remove the last element from the dynamic array
{
    printf("Popping last element\n");
    if (self->size > 0)
    {
        self->size--; // Decrement the size to effectively remove the last element (the data remains in memory but is considered unused)
    }
}

void int_array_delete(dynamic_array *self, size_t i) // Function to delete an element at a specific index in the dynamic array
{
    printf("Deleting element at index %zu\n", i);  
    if (i >= self->size) return;

    memmove  // Use memmove to safely handle overlapping memory regions when shifting elements after deletion
    (
        &self->data[i], // Shift elements to the left to fill the gap created by the deleted element
        &self->data[i + 1], // Move the elements after the deleted element one position to the left
        (self->size - i - 1) * sizeof(int) // Calculate the number of bytes to move based on the number of elements being shifted
    );

    self->size--; // Decrement the size of the array after deletion
}

void int_array_free(dynamic_array *self) // Function to free the memory allocated for the dynamic array 
{
    printf("Freeing dynamic array\n");
    free(self->data);
    free(self);
}

int main()
{
    dynamic_array *arr = create_dynamic_array();
    if (!arr) 
    return 1;

    for (int i = 0; i <=10; i++)
    int_array_push(arr, i);

    for (size_t i = 0; i < arr->size; i++)
    printf("%d ", *dynamic_array_at(arr, i));

    printf("\n");

    int_array_delete(arr, 5);

    for (size_t i = 0; i < arr->size; i++)
    printf("%d ", *dynamic_array_at(arr, i));

    printf("\n");

    int_array_free(arr);
    return 0;
}