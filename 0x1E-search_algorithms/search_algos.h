#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

/* Task 1 */
int linear_search(int *array, size_t size, int value);

/* Task 2 */
int binary_search(int *array, size_t size, int value);

/* Advanced Task 100 */
int jump_search(int *array, size_t size, int value);

/* Adanced Task 102 */
int interpolation_search(int *array, size_t size, int value);

/* Advanced Task 103 */
int exponential_search(int *array, size_t size, int value);

/* Advanced Task 104 */
int advanced_binary(int *array, size_t size, int value);

#define VALUE_CHECKED "Value checked array[%u] = [%d]\n"
#define VALUE_FOUND "Value found between indexes [%u] and [%u]\n"

#endif /* SEARCH_ALGOS */
