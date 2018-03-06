#include "lists.h"
/**
 * pop_listint - function to remove first
 * @head: pointer to struct node type
 * Return:  always successful
 */
int pop_listint(listint_t **head)
{
	listint_t *top = NULL;
	int value = 0;

	if (*head == NULL)
	{
		return (0);
	}
	top = (*head)->next;
	value = (*head)->n;
	*head = top;
	free(top);
	return (value);
}
