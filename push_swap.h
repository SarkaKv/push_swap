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

typedef struct t_stack
{   
    int number;
    struct t_stack* next;
    struct  t_stack* prev;
}   s_stack;


// argumentcheking
int checkinput(char *argv);
char	**oneargumentcheck(char *argv1);

// memory helpers
void	freeexit(char **numberstofree);
void *safemalloc(size_t size);
void	freenoexitchar(char **numberstofree);
void	freenoexitint(int **numberstofree);

// making stack but make it stupidly complicated
void makenumbers(char **mynumbers);


#endif
