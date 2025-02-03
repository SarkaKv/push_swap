/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallsorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 08:29:29 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-23 08:29:29 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(s_stack *a, s_stack *b)
{
    (void)b;
	int	min;
	int	max;

	min = findmin(a);
	max = findmax(a);
    if(min == 0 && max == 2)
        return;
	else if (min == 0)
	{
		sa(&a);
		rota(&a);
	}
	else if (min == 1 && max == 0)
	{
		rra(&a);
		rra(&a);
	}
	else if (min == 1 && max == 2)
		sa(&a);
	else if (min == 2 && max == 0)
	{
		sa(&a);
		rra(&a);
	}
	else if (min == 2 && max == 1)
		rra(&a);
}

void sort4(s_stack *a, s_stack *b)
{
    if(checkifsorted(a) == 1)
        return;
    int min = findmin(a);
    if(min == 1)
        sa(&a);
    else if(min == 2)
    {
        rra(&a);
        rra(&a);
    }
    else if(min == 3)
        rra(&a);
    pushb(&a,&b);
    sort3(a,b);
    pusha(&a,&b);
}

void sort5(s_stack  *a, s_stack *b)
{
    int min = findmin(a);
    if(min == 1)
        sa(&a);
    else if(min == 2)
    {
        rota(&a);
        rota(&a);
    }
    else if(min == 3)
    {
        rra(&a);
        rra(&a);
    }
    else if(min == 4)
        rra(&a);
    pushb(&a,&b);
    sort4(a,b);
    pusha(&a,&b);
}
// worst case should be 10
void	smallsort(s_stack **stacka, s_stack **stackb, int sizestack)
{
	if (sizestack == 2)
	{
		if (checkifsorted(*stacka) == 0)
		{
			sa(stacka);
		}
		freeexitstack(stacka, 1);
	}
	else if (sizestack == 3)
		sort3(*stacka, *stackb);
	else if (sizestack == 4)
		sort4(*stacka, *stackb);
	else if (sizestack == 5)
		sort5(*stacka, *stackb);
	freeexitstack(stacka, 1);
}
