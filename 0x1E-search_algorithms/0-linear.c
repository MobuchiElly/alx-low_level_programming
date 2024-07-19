#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search: Searches in a an array for integers for a given value
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 * 
 * Return: the first index where value is located, or -1 if value is not found or array is empty
*/

int linear_search(int *array, size_t size, int value){
    if(array == NULL){
        return -1;
    }
    for(size_t i = 0; i < size; i++){
        printf("Value checked %d = [%lu]", i, array[i]);
        if(array[i] == value){
            return i;
        }
    }
    return -1;
}