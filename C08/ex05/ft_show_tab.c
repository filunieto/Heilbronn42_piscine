#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *solucion;
    int i;

    solucion = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if (!solucion)
        return NULL;
    i = 0;
    while (i < ac)
    {
        solucion[i].size = ft_strlen(av[i]);
        solucion[i].str = (char *)malloc(sizeof(char) * ft_strlen(av[i])); 
        solucion[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i]) + 1));//hay que añadir un espacio para le carcter null
        if (!solucion[i].str || !solucion[i].copy)
        {
            return (NULL);
        }
        solucion[i].str = av[i];     
        ft_strcpy(solucion[i].copy, solucion[i].str);
        i++;
    }
    solucion[i].size = 0; 
    solucion[i].str = 0; //según el enunciado solo este es necesario
    solucion[i].copy = 0;
    return (solucion); //he tenido problemas con la delcaracion de la estructura : No entiendo los 2 nombres
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;
    
    i = 0;
    while (!(par[i].copy) && !(par[i].size) && !(par[i].str))
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}