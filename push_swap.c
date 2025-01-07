/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 16:46:23 by skvackov          #+#    #+#             */
/*   Updated: 2024-12-27 16:46:23 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void *safemalloc(size_t size)
{
    void *adress;
    adress = malloc(size);
    if(!adress)
        return NULL;
    return adress;
}

int	main(int argc, char **argv)
{
    int counter;
    char    **numbers;

	counter = 1;
	if (argc == 2)
	{
		numbers = oneargumentcheck(argv[1]);
		makelist(numbers);
	}
	if (argc > 2)
	{
		numbers = safemalloc(sizeof(char *) * (argc));
		while (counter < argc)
		{
			checkinput(argv[counter], numbers);
			numbers[counter - 1] = argv[counter];
			counter++;
		}
		numbers[counter - 1] = NULL;
		makelist(numbers);
	}
	write(1, "Error\n", 6);
	return (1);
}
