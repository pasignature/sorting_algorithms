#include "sort.h"

/**
 * bubble_sort - C function that uses uses the Bubble sort method in an array
 * @array: array of integers to sort
 * @size: the size of the array to be sorted
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
  int holder = 1;
  unsigned int i;

  if (!array || size < 2)
    return;

  while (holder)
    {
      holder = 0;
      for (i = 0; i < size - 1; i++)
	{
	  if (array[i] > array[i + 1])
	    {
	      int next = array[i + 1];

	      array[i + 1] = array[i];
	      array[i] = next;
	      holder = 1;
	      print_array(array, size);
	    }
	}
    }
}
