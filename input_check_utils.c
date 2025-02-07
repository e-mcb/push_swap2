#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int ft_issign(char c)
{
    if (c == '+' || c == '-')
        return (1);
    else
        return (0);
}

int int_comp(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (s1[i] == '+' && s2[j] != '+')
        i++;
    else if (s2[j] == '+')
        j++;
    while (s1[i] != 0 && s2[j] != 0 && s1[i] == s2[j])
    {
        i++;
        j++;
    }
    return (s1[i] - s2[j]);
}
