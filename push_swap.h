#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
    int				cost_a;
	int				cost_b;
	int				pos;
	int				target_pos;
    int				index;
	struct s_stack	*next;
}	t_stack;

//utils     
void	    ft_putstr(char *str);
void        free_stack(t_stack **stack);
int         ft_atoi(const char *nptr);
t_stack     *ft_stack_last(t_stack *stack);
void        find_cost(t_stack **stack_a, t_stack **stack_b);
void		stack_error(t_stack **stack_a, t_stack **stack_b);
int 		ft_input_check(char **argv);
t_stack 	*fill_stack(int argc, char **argv);
void    	set_index(t_stack *stack, int size);
int			ft_abs_value(int nb);

//          moves
void		ft_pa(t_stack **stack_a, t_stack **stack_b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_sa(t_stack **stack_a);
void		ft_sb(t_stack **stack_b);
void		ft_ss(t_stack **stack_a, t_stack **stack_b);
void		ft_ra(t_stack **stack_a);
void		ft_rb(t_stack **stack_b);
void		ft_rr(t_stack **stack_a, t_stack **stack_b);
void		ft_rrr(t_stack **stack_a, t_stack **stack_b);
void		ft_rra(t_stack **stack_a);
void		ft_rrb(t_stack **stack_b);

// additional functions
void        ft_sort_stack(t_stack **stack_a, t_stack **stack_b);
int         sorted_check(t_stack *stack);
int         ft_stack_size(t_stack *stack);
t_stack 	*create_stack(int value);
void        ft_stack_add_front(t_stack **stack, t_stack *new_elem);
void        ft_stack_add_last(t_stack **stack, t_stack *new_elem);
int         sorted_check(t_stack *stack);
void    	sort_3(t_stack **stack);
int 		ft_min_index_pos(t_stack **stack);
void 		get_target_pos(t_stack **stack_a, t_stack **stack_b);
void    	ft_pushswap(t_stack **stack_a, t_stack **stack_b);
void    	exec_min_cost(t_stack **stack_a, t_stack **stack_b);
void 		prep_handler(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b);
int			ft_isdigit(int c);
int 		ft_issign(char c);
int 		int_comp(const char *s1, const char *s2);

#endif