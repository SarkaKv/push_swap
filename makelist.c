/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makelist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-07 15:57:47 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-07 15:57:47 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void checkfordoubles(long int **original, int lenght)
{
	int count = 0;
	int checking;
	while(count < lenght)
	{
		long int currentcheck = *original[count];
		checking = count + 1;

		while(checking < lenght)
		{
			if(*original[checking] == currentcheck)
			{
				freenoexitint(original);
				exit(0);
			}
			checking++;
		}
		count++;
	}
}

void pushintostack(s_stack **stack, int currentint, long int **incaseofmallocfail)
{
    s_stack *new_node = safemalloc(sizeof(s_stack));
	if(!new_node)
	{
		freenoexitint(incaseofmallocfail);
		freexitstack(stack);
	}
	new_node->number = currentint;
	new_node->next = *stack;
	new_node->prev = NULL;
	if(*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}

void makestack(long int **numbers)
{
    s_stack *originalstack = NULL;
    int forcorrecttop = 0;
    while(numbers[forcorrecttop] != NULL)
        forcorrecttop++;
    forcorrecttop--;
    while(forcorrecttop >= 0)
    {
        pushintostack(&originalstack, (int)(*numbers[forcorrecttop]), numbers);
        forcorrecttop--;
    }
    freenoexitint(numbers);
	if(checkifsorted(originalstack) == 1)
		freeexitstack;
	else 
		startsort(originalstack);
}

void	makenumbers(char **mynumbers)
{
	long int **afteratol;
	int i = 0;
	int j = 0;

	while (mynumbers[i] != NULL)
		i++;
	afteratol = safemalloc(sizeof(long int *) * (i + 1));
	while (j < i)
	{
		afteratol[j] = safemalloc(sizeof(long int));
		*afteratol[j] = ft_atol(mynumbers[j]);
		if(*afteratol[j] > INT_MAX || *afteratol[j] < INT_MIN)
		{
			freenoexitint(afteratol);
			freeexit(mynumbers);
		}
		j++;
	}
	freenoexitchar(mynumbers);
	afteratol[j] = NULL;
	checkfordoubles(afteratol, i);
	makestack(afteratol);
}

