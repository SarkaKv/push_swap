/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skvackov <skvackov@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-27 16:46:26 by skvackov          #+#    #+#             */
/*   Updated: 2024-12-27 16:46:26 by skvackov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include "./libft/libft.h"


// argumentcheking
int checkinput(char *argv);
char	**oneargumentcheck(char *argv1);

// memory freeing pre-linked list
void	freeexit(char **numberstofree);

#endif
