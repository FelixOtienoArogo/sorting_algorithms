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
int temp;
size_t i, j;
bool swap;

if (array == NULL)
return;

for (i = 0; i < size - 1; i++)
{
for (j = i + 1; j < size; j++)
{
if (array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
swap = true;
}
}
print_array(array, size);
if (swap == false)
break;
}
}
