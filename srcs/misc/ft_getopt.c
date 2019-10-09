#include "libft.h"

char g_opterr[32] = {0};

static int	shortopt(char const arg, char const *optstr)
{
	int	i;

	i = 0;
	while (optstr[i])
	{
		if (arg == optstr[i])
			return (i);
		++i;
	}
	ft_memcpy(g_opterr, &arg, 1);
	return (OPT_ERRBIT);
}

static int	longopt(char const *arg, char const **opttab)
{
	int	i;

	i = 0;
	if (opttab == NULL)
		return (OPT_ERRBIT);
	while (opttab[i])
	{
		if (ft_strcmp(arg, opttab[i]) == 0)
			return (i);
		++i;
	}
	ft_memcpy(g_opterr, arg, ft_strlen(arg));
	return (OPT_ERRBIT);
}

int			ft_getopt(char const **argv,
	char const *optstr, char const **opttab)
{
	int		options;

	options = 0;
	while (*++argv)
	{
		if ((*argv)[0] == '-')
		{
			if ((*argv)[1] != '-')
				while (*++(*argv))
					options |= (1 << shortopt(**argv, optstr));
			else if ((*argv)[1] == '-')
			{
				if ((*argv)[2])
					options |= (1 << longopt(*argv + 2, opttab));
				else
					break;
			}
		}
		else
			break;
	}
	return (options);
}
