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

#include "pushswap.h"

void pushintostack(s_stack *stack, int currentint)
{
    


}

void makestack(int **numbers)
{
    s_stack *originalstack = NULL;
    int forcorrecttop = 0;
    while(numbers[forcorrecttop] != NULL)
        forcorrecttop++;
    forcorrecttop--;
    while(forcorrecttop >= 0)
    {
        pushintostack(&originalstack, numbers[forcorrecttop]);
        forcorrecttop--;
    }
    freenoexitint(numbers);
    checkfordoubles();
}

void	makenumbers(char **mynumbers)
{
	int **afteratoi;
	int i = 0;
	int j = 0;
//won't work need to check for longs first
	while (mynumbers[i] != NULL)
		i++;
	freenoexitchar(mynumbers);
	afteratoi = safemalloc(sizeof(int *) * (i + 1));
	while (j < i)
	{
		afteratoi[j] = safemalloc(sizeof(int));
		*afteratoi[j] = ft_atoi(mynumbers[j]);
		j++;
	}
	afteratoi[j] = NULL;
	makestack(afteratoi);
}

