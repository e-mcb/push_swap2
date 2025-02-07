#include "push_swap.h"

static void	ft_rot(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tail;

	tmp = *stack;
	*stack = (*stack)->next;
	tail = ft_stack_last(*stack);
	tmp->next = NULL;
	tail->next = tmp;
}

void	ft_ra(t_stack **stack_a)
{
	ft_rot(stack_a);
	ft_putstr("ra\n");
}

void	ft_rb(t_stack **stack_b)
{
	ft_rot(stack_b);
	ft_putstr("rb\n");
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rot(stack_a);
	ft_rot(stack_b);
	ft_putstr("rr\n");
}
