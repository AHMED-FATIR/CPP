/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:57:40 by afatir            #+#    #+#             */
/*   Updated: 2023/07/30 09:19:19 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
{
	#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_putstr(char *str)
{
	size_t i = 0;
	int len = 0;

	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		len += ft_putchar(str[i++]);
	return (len);
}
// int count(int nb)
// {
// 	int l = 0;
// 	while (nb)
// 	{
// 		nb = nb/10;
// 		l++;
// 	}
// 	return l;
// }
// char *ft_itoi(int nbr)
// {
// 	long nb = (nbr * -1);
// 	int len = count(nb);
// 	char *s = (char *)malloc((len + 1) * sizeof(char));
// 	int i = 0; 
// 	while (len--)
// 	{
// 		s[i] = nb % 10 - 48;
// 		nb /= 10;
// 		i++;
// 	}
// 	s[i] = '\0';
// 	printf("%s\n", s);
// 	exit(0);
// 	return s;
// }
static	int	ft_count(int n)
{
	size_t		ls;

	ls = 0;
	if (n <= 0)
		ls++;
	while (n)
	{
		n /= 10;
		ls++;
	}
	return (ls);
}

char	*ft_itoa(int n)
{
	char		*ps;
	long int	nb;
	size_t		ls;

	nb = n;
	ls = ft_count(n);
	ps = (char *)calloc(sizeof(char), (ls + 1));
	if (!ps)
		return (NULL);
	if (!nb)
		ps[0] = '0';
	if (nb < 0)
	{
		ps[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ps[ls - 1] = nb % 10 + 48;
		nb = nb / 10;
		ls--;
	}	
	return (ps);
}
int ft_putnbr(int nb)
{
	long nbr = INT32_MAX;
	int len = 0;

	if (nb == INT32_MIN)
	{
		len += ft_putstr(ft_itoa(nb));
		return (11);
	}
	if (nb >= 0 && nb <= 9)
		len += ft_putchar(nb + 48);
	else if(nb < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(nb * -1);
	}
	else
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	return (len);
}
int ft_puthexa(unsigned int nb, char *s)
{
	int len = 0;
	if (nb > 16)
		len += ft_puthexa(nb / 16, s);
	if (nb > 9)
		len += ft_putchar(s[nb % 16]);
	if (nb < 10)
		len += ft_putchar(nb + 48);
	return (len);
}
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	i++;
	return i;
}
int ft_printf(const char *f, ... )
{
	int i = 0;
	int len = 0;
	va_list arg;
	va_start(arg, f);
	while (f[i])
	{
		if(f[i] == '%')
		{
			i++;
			if (f[i] == 's')
				len += ft_putstr(va_arg(arg, char *));
			else if (f[i] == 'd')
				len += ft_putnbr(va_arg(arg, int));
			else if (f[i] == 'x')
				len += ft_puthexa(va_arg(arg, unsigned int), "0123456789abcdef");
			else
				len += ft_putchar(f[i]);
		}
		else
			len += ft_putchar(f[i]);
		i++;
	}
	va_end(arg);
	return (len);
}


int main()
{
	printf("[%d]\n", ft_printf("%d", INT32_MAX));
}
}