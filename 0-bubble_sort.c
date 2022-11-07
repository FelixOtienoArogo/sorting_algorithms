#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include <stdbool.h>

/**
 *bubble_sort - sorts an array of integers using the Bubble sort
 *
 *@array: the array to be sorted
 *@size: the size of the array
 *
 *Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
int temp;
size_t i, j;
bool swap;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swap = true;
print_array(array, size);
}
}
if (swap == false)
break;
}
}
