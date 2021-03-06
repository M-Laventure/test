/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:11:22 by malavent          #+#    #+#             */
/*   Updated: 2018/09/04 13:03:53 by malavent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;
	int is_alpha;

	i = 0;
	is_alpha = 1;
	while (is_alpha == 1 && str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			is_alpha = 0;
		}
	i++;
	}
	return (is_alpha);
}
				
int main()
{
	char str[] = "Hello2bonjour";
	printf("%d", ft_str_is_alpha(str));
	return(0);
}
		
