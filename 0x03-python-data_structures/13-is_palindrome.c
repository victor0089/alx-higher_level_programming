#include "lists.h"

/**
 * is_palindrome - Checks if a linked list is
 * a palindrome or not.
 * @head: Pointer to linked list.
 * Return: 0 or 1
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow_ptr, *fast_ptr;
	listint_t *prev_slow_ptr = NULL, *mid_node = NULL;
	int is_palindrome = 1;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	slow_ptr = *head;
	fast_ptr = *head;

	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		fast_ptr = fast_ptr->next->next;
		prev_slow_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	if (fast_ptr != NULL)
	{
		mid_node = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	prev_slow_ptr->next = NULL;

	reverse_list(&slow_ptr);

	is_palindrome = compare_lists(*head, slow_ptr);

	reverse_list(&slow_ptr);

	if (mid_node != NULL)
	{
		prev_slow_ptr->next = mid_node;
		mid_node->next = slow_ptr;
	}
	else
		prev_slow_ptr->next = slow_ptr;

	return (is_palindrome);
}

/**
 * reverse_list - Reverses a linked list.
 * @head: A pointer to the head of the list.
 * Return: void.
 */
void reverse_list(listint_t **head)
{
	listint_t *prev_node, *current_node, *next_node;

	prev_node = NULL;
	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
}

/**
 * compare_lists - Compares two linked lists.
 * @head1: A pointer to the first list.
 * @head2: A pointer to the second list.
 * Return: 0 or 1
 */
int compare_lists(listint_t *head1, listint_t *head2)
{
	listint_t *pointer1 = head1;
	listint_t *pointer2 = head2;

	while (pointer1 != NULL && pointer2 != NULL)
	{
		if (pointer1->n == pointer2->n)
		{
			pointer1 = pointer1->next;
			pointer2 = pointer2->next;
		}
		else
			return (0);
	}

	if (pointer1 == NULL && pointer2 == NULL)
		return (1);

	return (0);
}

