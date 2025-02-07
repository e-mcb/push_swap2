#include "push_swap.h"

static int	max_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

void	sort_3(t_stack **stack)
{
	int		highest;

	if (sorted_check(*stack))
		return ;
	highest = max_index(*stack);
	if ((*stack)->index == highest)
		ft_ra(stack);
	else if ((*stack)->next->index == highest)
		ft_rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		ft_sa(stack);
}
