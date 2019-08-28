#ifndef FT_INCLUDE_H
# define FT_INCLUDE_H

# define BUFSIZE 403
# define J1_JETON ('O') /* Don't change on "|" or isspace*/
# define J2_JETON ('X') /* Don't change on "|" or isspace*/

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct s_jeton
{
	int		largeur;
	int		hauteur;
	char 	jeton;
} s_jeton;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrs(char **strs);
void	ft_putnbr(int nb);

int		ft_language();
int		ft_print_menu_fr();
int		ft_print_menu_en();

void	ft_print_map(char **map);
int		ft_instd(int language);
int		ft_int_to_ptrchared(int nb);
int		ft_soluce(int largeur, int hauteur, int player, int jeton);

char	**ft_void_map(void);
int		ft_power();

int		ft_retry(int language);

# endif