#include "sort.h"

/**
 * countering_sort - sorts array with countering_sort
 * @size: size of the array to sort
 * @arr: array of numbers
 * Return: nothing
 */
void countering_sort(int *arr, size_t size)
{
	int *counter;
	int i, k = 0, total = 0;

	if (!arr || size < 2)
		return;
	for (i = 0; i < (int)size; i++)
		if (arr[i] > k)
			k = arr[i];
	counter = malloc(sizeof(int) * (k + 1));
	if (!counter)
		return;
	for (i = 0; i < (int)size; i++)
		counter[arr[i]] += 1;
	for (i = 0; i < k + 1; i++)
	{
		if (counter[i])
			total++;
		counter[i] = total;
	}
	print_array(counter, k + 1);
	total = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (counter[i] != total)
			arr[total++] = i;
	}
	free(counter);
}
