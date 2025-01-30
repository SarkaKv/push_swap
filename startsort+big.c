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

static int	bitnumberindex(s_stack *a, int lenghtyfella)
{
	int	bitcheck;

	bitcheck = 0;
	while ((lenghtyfella - 1) >> bitcheck)
	{
		bitcheck++;
	}
	return (bitcheck);
}

static void	actualradics(s_stack *a, s_stack *b, int bitnumberomax,
		int lenghtofstack)
{
	s_stack	*workingradix;
	int		iteration;

	workingradix = a;
	iteration = 0;
	while (iteration < lenghtofstack)
	{
		while (workingradix)
		{
			if ((workingradix->index >> iteration) & 1 == 0)
			{
				pushb(&stacka, &stackb);
			}
			else
				ra(stacka);
			workingradix->
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

void	startsort(s_stack *stacka)
{
	s_stack *stackb;
	int lenghtofstack;

	stackb = NULL;
	lenghtofstack = listleght(stacka);
	if (lenghtofstack <= 5)
	{
		sortsmall(stacka, stackb, lenghtofstack);
	}
	else
	{
        setindextom1(stacka);
		callforindex(stacka, lenghtofstack);
		int bitnumberomax = bitnumberindex(stacka, lenghtofstack);
		actualradics(stacka, stackb, bitnumberomax, lenghtofstack);
        freeexitstack(stacka);
	}
}