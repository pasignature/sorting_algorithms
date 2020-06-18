#include "sort.h"

/**
 * bubble_sort - sort array
 * @size: hash table size
 * @array: array containing integers
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
  int swapped = 1;
  unsigned int idx;

  if (!array || size < 2)
    return;

  while (swapped)
    {
      swapped = 0;
      for (idx = 0; idx < size - 1; idx++)
	{
	  if (array[idx] > array[idx + 1])
	    {
	      int next = array[idx + 1];

	      array[idx + 1] = array[idx];
	      array[idx] = next;
	      swapped = 1;
	      print_array(array, size);
	    }
	}
    }
}
