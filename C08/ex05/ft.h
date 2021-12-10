#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H
#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
        {
			i++;
        }
		else
        {
			return (s1[i] - s2[i]);
        }
	}
	return (s1[i] - s2[i]);
}

//el ejercicio no pide estas funciones abajo  pero las añado
char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else
    {
        if (nb < 0)
        {
            write(1, "-", 1);
            nb = (-nb);
        }
        if (nb < 10)
        {
            ft_putchar (nb + '0');
        }
        else
        {
            ft_putnbr (nb / 10);
            ft_putnbr (nb % 10);
        }
    }
}
#endif
