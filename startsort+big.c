/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-07 15:58:08 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-07 15:58:08 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

static void	callforindex(s_stack *a, int lenghtofstack)
{
	s_stack	*temp;
	s_stack	*holdhead;
	int		index;
	int		curnumber;

	holdhead = a;
	index = 0;
	while (index < lenghtofstack)
	{
		temp = holdhead;
		curnumber = INT_MAX;
		while (temp)
		{
			if (temp->index == -1 && curnumber > temp->number)
				curnumber = temp->number;
			temp = temp->next;
		}
		a = holdhead;
		while (a)
		{
			if (curnumber == a->number && a->index == -1)
			{
				a->index = index;
				break ;
			}
			a = a->next;
		}
		index++;
	}
}

static int	bitnumberindex(int lenghtyfella)
{
	int	bitcheck;

	bitcheck = 0;
	while ((lenghtyfella - 1) >> bitcheck)
	{
		bitcheck++;
	}
	return (bitcheck);
}


static void	actualradics(s_stack **a, s_stack **b, int bitnumberomax,
		int lenghtofstack)
{
	int		iteration;
	int count = 0;

	iteration = 0;
	while (iteration < bitnumberomax)
	{
		count = lenghtofstack;
		while(count > 0)
		{
			if(*a && ((*a)->index >> iteration) & 1)
				rota(a);
			else
			{
				pushb(a, b);
			}
			count--;
		}
	while(*b)
	{
		pusha(a, b);
	}
		iteration++;
	}
}

static void setindextom1(s_stack *a)
{
    while (a)
	{
		a->index = -1;
		a = a->next;
	}
}

void	startsort(s_stack **stacka)
{
	s_stack *stackb;
	int lenghtofstack;

	stackb = NULL;
	lenghtofstack = listlenght(*stacka);
	if (lenghtofstack <= 5)
	{
		smallsort(stacka, &stackb, lenghtofstack);
	}
	else
	{
        setindextom1(*stacka);
		callforindex(*stacka, lenghtofstack);
		int bitnumberomax = bitnumberindex(lenghtofstack);
		actualradics(stacka, &stackb, bitnumberomax, lenghtofstack);
        freeexitstack(stacka, 1); 
	}
}