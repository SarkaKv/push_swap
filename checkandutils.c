/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkandutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-23 08:18:05 by skvackov          #+#    #+#             */
/*   Updated: 2025-01-23 08:18:05 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int atol(char *str)
{
    long int sign = 1;
    long int results = 0;
    int counter = 0;
    if(str[counter] == '-')
    {
        sign = sign * -1;
        counter++;
    }
    while(str[counter] == '-' || str[counter] == '+')
    {
        counter++;
    }
    while(str[counter] != '\0')
    {
        results = results * 10;
        results = results + str[counter] - '0';
        counter++;
    }
    return(results * sign);
}

int checkifsorted(s_stack *stack)
{
    if(!stack || stack->next == NULL)
        freeexitstack(stack);
    s_stack *current = stack;
    while(current->next != NULL)
    {
        if(current->number < current->next->number)
            current = current->next;
        else
        { 
            return(0);
        }
    }
    return(1);
}

void *safemalloc(size_t size)
{
    void *adress;
    adress = malloc(size);
    if(!adress)
        return NULL;
    return adress;
}