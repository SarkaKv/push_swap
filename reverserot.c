/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 14:26:09 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-23 14:26:09 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverserot(s_stack **s_stack)
{

}


void reverserota(s_stack **stacka)
{
    ft_putstr_fd("rra\n", 1);
    reverserot(stacka);
}

void reverserotb(s_stack **stackb)
{
    ft_putstr_fd("rrb\n", 1);
    reverserot(stackb);
}

void doublereverserot(s_stack **stacka, s_stack **s_stackb)
{
    ft_putstr_fd("rrr\n", 1);
    reverserot(stacka);
    reverserot(stackb);
}