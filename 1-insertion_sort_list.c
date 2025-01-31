#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	        listint_t *current, *prev, *next_node;
            if(list == NULL || *list == NULL || (*list)->next == NULL)
            return;

            current = (*list)->next;
            while(current != NULL)
            {
                    next_node = current->next;
                    while(current->prev != NULL && current)
                    {
                            prev = current->prev;
                            prev->next = current->next;
                            if(current->next != NULL)
                                        current->next->prev = prev;
                            current->prev = prev->prev;
                            current->next = prev;
                            if(prev->prev != NULL)
                                        prev->prev->next = current;
                            else
                                        *list = current;
                            prev->prev = current;
                            print_list(*list);

                    }
                    current = next_node;


            }

}