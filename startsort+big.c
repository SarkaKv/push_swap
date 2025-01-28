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

void startsort(s_stack *stacka)
{
    s_stack *stackb = NULL;
    int lenghtofstack = listleght(stacka);
    if(lenghtofstack <= 5)
    {
        sortsmall(stacka, stackb, lenghtofstack);
    }
    else
        sortlarge(stacka, stackb);
        
}

void sortlarge(s_stack **stacka, s_stackb **stackb)
{
    

}