#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns number of elements in listint_t list
 *
 * @h: 
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return i;
}
