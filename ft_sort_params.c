/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rblondel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:58:42 by rblondel          #+#    #+#             */
/*   Updated: 2018/07/14 18:52:19 by rblondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);

void	ft_putchar(char c);

void	ft_printParams(int ac, char **ag)
{
	int i;

	i = 1;
	while (i < ac)
	{	
		ft_putstr(ag[i]);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

int 	main(int ac, char **ag)
{
	char *tmp[1];
	int sortCheck;
	int i;

	sortCheck = 1;
	if (ac == 1)
		return (0);
	while (sortCheck != 0)
	{
		i = 1;
		sortCheck = 0;
		while (i < ac - 1)
		{
			if(ft_strcmp(ag[i], ag[i + 1]))
			{
				tmp[0] = ag[i];
				ag[i] = ag [i + 1];
				ag[i + 1] = ag[i];
				sortCheck = 1;
			}
			i++;
		}
	}
	ft_printParams(ac, ag);
	return (0);
}
