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

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "./libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct t_stack
{   
    int number;
    struct t_stack* next;
    struct  t_stack* prev;
}   s_stack;


// argumentcheking
int	checkinput(char *argv, char **numberstofree);
char	**oneargumentcheck(char *argv1);
void checkfordoubles(long int **original, int lenght);

// memory helpers
void	freeexit(char **numberstofree);
void *safemalloc(size_t size);
void	freenoexitchar(char **numberstofree);
void	freenoexitint(int **numberstofree);
void freeexitstack(s_stack *stack, int exit);

// making stack but make it stupidly complicated
void makenumbers(char **mynumbers);
long int atol(char *str);
void makestack(long int **numbers);
void pushintostack(s_stack **stack, int currentint, long int **incaseofmallocfail);

// cheking for sort and lenght
int checkifsorted(s_stack *stack);

// sorting
void startsort(s_stack *stack);
// sorting 1-5

// instructs
void ss(s_stack **stacka, s_stack **s_stackb);
void	sb(s_stack **stack);
void	sa(s_stack **stack);
void	swap12(s_stack **stack);
void push(s_stack **pusher, s_stackb **reciever);
void pushb(s_stack **stacka, s_stackb **stackb);
void pusha(s_stack **stacka, s_stackb **stackb);

#endif