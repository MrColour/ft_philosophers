/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 17:23:16 by xinu              #+#    #+#             */
/*   Updated: 2020/04/18 23:35:10 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

long long	tvto_millisec(struct timeval *event)
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

int			is_digit(char c)
{
	int result;

	if ('0' <= c && c <= '9')
		result = 1;
	else
		result = 0;
	return (result);

}

long long	philo_atoll(char *str)
{
	int			i;
	long long	result;

	i = 0;
	result = 0;
	while (str[i] != '\0' && is_digit(str[i]) == 1)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		errno = EINVAL;
	return (result);
}
