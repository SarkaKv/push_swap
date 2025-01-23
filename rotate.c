/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 11:16:32 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-23 11:16:32 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotting(s_stack **stack)
{
    (!*stack || !*stack->next)
        return;
    s_stack *holder = *stack;
    *stack = (*stack)->next;
    if(*stack)
        *stack->prev = NULL;
    if(!*stack)
    {
        *stack = holder;
        return;
    }
    while(stack->next)
    {
        stack->next;
    }
    

}


void rota(s_stack **stacka)
{
    ft_putstr_fd("ra\n", 1);
    rotting(&stacka);

}
void rotb(s_stack **stackb)
{
    ft_putstr_fd("rb\n", 1);
    rotting(&stackb);
}
void rr(s_stack **stacka, s_stack **stackb)
{
    ft_putstr_fd("rr\n", 1);
    rotting(&stacka);
    rotting(&stackb);
} 


