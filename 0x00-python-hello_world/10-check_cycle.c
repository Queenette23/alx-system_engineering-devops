#include "lists.h"

/**
 * check_cycle - Checks whether a linked list has a loop
 * @list: The linked list to be checked
 *
 * Return: 1 if the list has a loop, 0 otherwise
 */
int check_cycle(listint_t *list)
{
    listint_t *slow = list;
    listint_t *fast = list;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }

    return 0;
}

