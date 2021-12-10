#ifndef FT_BOOLEAN_H  //sin este in¡fndef y el endif parece que funciona igual. 
# define FT_BOOLEAN_H //si ponemos el define arriba del inndef , salta el bloque
# include <unistd.h>
# define EVEN(x) x % 2 == 0 
# define EVEN_MSG "I have a pair number of arguments."
# define ODD_MSG "I have an impair number of arguments."
# define TRUE 1
# define FALSE 0
# define SUCCESS 0
typedef int		t_bool; //crea un sinonimo de valres
#endif