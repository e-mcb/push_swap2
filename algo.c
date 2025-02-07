#include "push_swap.h"

static void	ft_push_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int	stack_size;
	int	pushed;
	int	i;

	stack_size = ft_stack_size(*stack_a);
	pushed = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && pushed < stack_size / 2)
	{
		if ((*stack_a)->index <= stack_size / 2)
		{
			ft_pb(stack_a, stack_b);
			pushed++;
		}
		else
			ft_ra(stack_a);
		i++;
	}
	while (stack_size - pushed > 3)
	{
		ft_pb(stack_a, stack_b);
		pushed++;
	}
}

static void	min_on_top(t_stack **stack_a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = ft_stack_size(*stack_a);
	lowest_pos = ft_min_index_pos(stack_a);
	if (lowest_pos > stack_size / 2)
	{
		while (lowest_pos < stack_size)
		{
			ft_rra(stack_a);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ft_ra(stack_a);
			lowest_pos--;
		}
	}
}

void	ft_pushswap(t_stack **stack_a, t_stack **stack_b)
{
	ft_push_to_b(stack_a, stack_b);
	sort_3(stack_a);
	while (*stack_b)
	{
		get_target_pos(stack_a, stack_b);
		find_cost(stack_a, stack_b);
		exec_min_cost(stack_a, stack_b);
	}
	if (!sorted_check(*stack_a))
		min_on_top(stack_a);
}
