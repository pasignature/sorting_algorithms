#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - C function to insert node via sort
 * @list: Double pointer to list of struct listint_t type
 * Return: Return sorted list
 */

void insertion_sort_list(listint_t **list)
{
  listint_t *my_list;

  if (!list)
    return;
  if (*list && !(*list)->next)
    return;
  my_list = *list;
  while (my_list)
    {
      listint_t *rev = my_list;

      while (rev->prev && rev->prev->n > rev->n)
	{
	  /* swap nodes */
	  listint_t *next = rev->next;
	  listint_t *left = rev->prev;
	  listint_t *prev = left->prev;

	  rev->next = left;
	  rev->prev = prev;

	  if (prev)
	    prev->next = rev;

	  left->next = next;
	  left->prev = rev;

	  if (next)
	    next->prev = left;

	  if (!rev->prev)
	    *list = rev;
	  print_list(*list);
	}
      my_list = my_list->next;
    }
}
