/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memoryhelpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-08 11:03:49 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-08 11:03:49 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeexit(char **numberstofree)
{
    int i = 0;
	if (numberstofree)
	{
		while (numberstofree[i] != NULL)
		{
			free(numberstofree[i]);
			i++;
		}
		free(numberstofree); 
	}
    write(1, "Error\n", 6);
	exit(1);
}

void	freenoexitchar(char **numberstofree)
{
    int i = 0;
	if (numberstofree)
	{
		while (numberstofree[i] != NULL)
		{
			free(numberstofree[i]);
			i++;
		}
		free(numberstofree); 
	}
}

void	freenoexitlongint(long int **numberstofree)
{
    int i = 0;
	if (numberstofree)
	{
		while (numberstofree[i] != NULL)
		{
			free(numberstofree[i]);
			i++;
		}
		free(numberstofree); 
	}
}

void *safemalloc(size_t size)
{
    void *adress;
    adress = malloc(size);
    if(!adress)
        return NULL;
    return adress;
}

void freeexitstack(s_stack *stack)
{
	s_stack *stack_cur = *stack;
	s_stack *next;
	while(stack_cur != NULL)
	{
		next = stack_cur->next;
		free(stack_cur);
		stack_cur = next;
	}
	*stack = NULL;
	exit(0);
}