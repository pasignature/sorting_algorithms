#include "sort.h"

/**
<<<<<<< HEAD
 * bubble_sort - sorts array with bs algorith
 * @size: size of hash table
 * @array: array of ints
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
  size_t checker = size;
  size_t i, holder = 0;

  if (array == NULL || size == 0)
    return;
  while (checker > 0)
    {
      for (i = 0; i < size - 1; i++)
	{
	  if (array[i] > array[i + 1])
	    {
	      holder = array[i + 1];
	      array[i + 1] = array[i];
	      array[i] = holder;
	      print_array(array, size);
	    }
	}
      checker--;
=======
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
>>>>>>> 6585f19fd96e9a8da0e9c02b9b1c6233ee71e85a
    }
}
