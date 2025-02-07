#include "push_swap.h"

static void	ft_rot_a(t_stack **a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_ra(a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_rra(a);
			(*cost)++;
		}
	}
}

static void	ft_rot_b(t_stack **b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			ft_rb(b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			ft_rrb(b);
			(*cost)++;
		}
	}
}

static void	ft_rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		ft_rr(a, b);
	}
}

static void	ft_rev_rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
while (*cost_a < 0 && *cost_b < 0)
{
(*cost_a)++;
(*cost_b)++;
ft_rrr(a, b);
}
}


void	prep_handler(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		ft_rev_rot_ab(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		ft_rot_ab(a, b, &cost_a, &cost_b);
	ft_rot_a(a, &cost_a);
	ft_rot_b(b, &cost_b);
	ft_pa(a, b);
}
