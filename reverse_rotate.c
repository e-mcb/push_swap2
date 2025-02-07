#include "push_swap.h"

static void ft_rev_rot(t_stack **stack)
{
    t_stack *tmp;
    t_stack *last;
    t_stack *scnd_to_last;

    while (stack && (*stack)->next !=NULL && (*stack)->next->next !=NULL)
        *stack = (*stack)->next;
    last = (*stack)->next->next;
    scnd_to_last = (*stack)->next;
    tmp = *stack;
    *stack = last;
    (*stack)->next = tmp;
    scnd_to_last->next = NULL;
}

void	ft_rra(t_stack **stack_a)
{
	ft_rev_rot(stack_a);
	ft_putstr("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	ft_rev_rot(stack_b);
	ft_putstr("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rot(stack_a);
	ft_rev_rot(stack_b);
	ft_putstr("rrr\n");
}
