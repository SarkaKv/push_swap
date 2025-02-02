/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 16:54:24 by skvackov          #+#    #+#             */
/*   Updated: 2024-12-27 16:54:24 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void *safemalloc(size_t size)
{
    void *adress;
    adress = malloc(size);
    if(!adress)
        return NULL;
    return adress;
}


int	checkinput(char *argv, char **numberstofree)
{
	int	oki;

	if (argv == NULL)
		freeexit(numberstofree);
	if (argv[0] != '-' && (argv[0] > '9' || argv[0] < '0'))
	{
		ft_putstr_fd("Error\n", 1);
        freeexit(numberstofree);
	}
	oki = 1;
	while (argv[oki] != '\0')
	{
		if (argv[oki] < '0' || argv[oki] > '9')
		{
			ft_putstr_fd("Error\n", 1);
			freeexit(numberstofree);
		}
		oki++;
	}
	return (0);
}

char	**oneargumentcheck(char *argv1)
{
	int		counter;
	char	**numbers;

	counter = 0;
	numbers = ft_split(argv1, ' ');
    if(!numbers)
        freeexit(NULL);
	while (numbers[counter] != NULL)
	{
		checkinput(numbers[counter], numbers);
		counter++;
	}
	return (numbers);
}


