#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdbool.h>

/**
 *selection_sort - sorts an array of integers using the Selection sort
 *
 *@array: the array to be sorted
 *@size: the size of the array
 *
 *Return: nothing
 */
void selection_sort(int *array, size_t size)
{
int temp, compare, min_index;
size_t i, j;
bool swap;

if (array == NULL)
return;

for (i = 0; i < size - 1; i++)
{
compare = array[i];
swap = false;
for (j = i + 1; j < size; j++)
{
if (compare > array[j])
{
compare = array[j];
min_index = j;
swap = true;
}
}
if (swap == true)
{
temp = array[i];
array[i] = compare;
array[min_index] = temp;
print_array(array, size);
}
}
}
