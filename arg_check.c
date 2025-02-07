#include "push_swap.h"

static int	num_check(char *argv)
{
	int	i;

	i = 0;
	if (ft_issign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && ft_isdigit(argv[i]))
		i++;
	if (argv[i] != '\0' && !ft_isdigit(argv[i]))
		return (0);
	return (1);
}

static int  dup_check(char **argv)
{
    int i;
    int j;

    i = 1;
    while (argv[i])
    {
        j = 1;
        while (argv[j])
        {
            if (j != i && int_comp(argv[i], argv[j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}


static int  is_zero(char *argv)
{
    int i;

    i = 0;
    if(ft_issign(argv[i]))
        i++;
    while (argv[i] && argv[i] == '0')
        i++;
    if (argv[i] != 0)
        return (0);
    return (1);
}

int ft_input_check(char **argv)
{
    int i;
    int zero_count;

    zero_count = 0;
    i = 1;
    while (argv[i])
    {
        if (!num_check(argv[i]))
            return (0);
        zero_count += is_zero(argv[i]);
        i++;
    }
    if (zero_count > 1)
        return (0);
    if (dup_check(argv))
        return (0);
    return (1);
}