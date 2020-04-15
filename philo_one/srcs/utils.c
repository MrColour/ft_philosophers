/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:23:16 by xinu              #+#    #+#             */
/*   Updated: 2020/04/14 20:08:09 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long	to_millisec(struct timeval *event)
{
	long long result;

	result = event->tv_sec * 1000;
	result += event->tv_usec / 1000;
	return (result);
}

size_t		llto_ad(long long num, char *dest)
{
	int			i;
	int			j;
	char		buff[sizeof(long long) * 8 + 1];

	i = 0;
	while (num != 0)
	{
		buff[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}

	j = 0;
	dest[i] = '\0';
	i--;
	while (i >= 0)
	{
		dest[j] = buff[i];
		j++;
		i--;
	}
	return (j);
}

size_t	at_strncpy(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

size_t	eto_ad(int event, char *dest)
{
	size_t	len;

	if (event == E_FORK)
		len = at_strncpy(dest, " has taken a fork\n", 18);
	else if (event == E_EATS)
		len = at_strncpy(dest, " is eating\n", 11);
	else if (event == E_SLEE)
		len = at_strncpy(dest, " is sleeping\n", 13);
	else if (event == E_THIN)
		len = at_strncpy(dest, " is thinking\n", 13);
	else if (event == E_DIED)
		len = at_strncpy(dest, " died\n", 5);
	else
		len = at_strncpy(dest, " ["RED"ERROR"ANSI_RESET"]!\n", 19);
	return (len);
}
