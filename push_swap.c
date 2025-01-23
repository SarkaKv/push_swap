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


int	main(int argc, char **argv)
{
    int counter;
    char    **numbers;

	counter = 1;
	if (argc == 2)
	{
		numbers = oneargumentcheck(argv[1]);
		makenumbers(numbers);
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
		makenumbers(numbers);
	}
	write(1, "Error\n", 6);
	return (1);
}
