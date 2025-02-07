#include "push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	tmp;

	if (stack == NULL || stack->next == NULL)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(*stack_a);
	ft_putstr("sa\n");
}

void	ft_sb(t_stack **stack_b)
{
	ft_swap(*stack_b);
	ft_putstr("sb\n");
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*stack_b);
	ft_putstr("ss\n");
}
