#include "../include/ft_include.h"

char	**ft_void_map(void)
{
	char	**map;

	if (!(map = (char **)malloc(sizeof(char *) * BUFSIZE + 1)))
		return (NULL);
	
	map[0] =  "+---+---+---+---+---+---+---+\n";
	map[1] =  "|   |   |   |   |   |   |   |\n";
	map[2] =  "+---+---+---+---+---+---+---+\n";
	map[3] =  "|   |   |   |   |   |   |   |\n";
	map[4] =  "+---+---+---+---+---+---+---+\n";
	map[5] =  "|   |   |   |   |   |   |   |\n";
	map[6] =  "+---+---+---+---+---+---+---+\n";
	map[7] =  "|   |   |   |   |   |   |   |\n";
	map[8] =  "+---+---+---+---+---+---+---+\n";
	map[9] =  "|   |   |   |   |   |   |   |\n";
	map[10] = "+---+---+---+---+---+---+---+\n";
	map[11] = "|   |   |   |   |   |   |   |\n";
	map[12] = "+---+---+---+---+---+---+---+\n";
	map[13] = "\0";

	return (map);
}

int		ft_int_to_ptrchared(int nb)
{
	int temp;

	if (nb == 0)
		return (3);
	temp = nb;
	nb = 0;
	nb += 3 + (4 * temp - 1) - 3;

	return (nb);
}

int		ft_soluce(int largeur, int hauteur, int soluce, int jeton)
{
	char	**map;

	if (!(map = (char **)malloc(sizeof(char *) * BUFSIZE + 1)))
		return (0);

	map = ft_void_map();
	if (map[hauteur][largeur] == ' ')
	{
		soluce++;
		return (soluce);
	}
	while ((map[2 - hauteur][largeur] == jeton && hauteur <= 1)
		|| (map[2 + hauteur][largeur] == jeton && hauteur >= 11)
		|| (map[hauteur][4 - largeur] == jeton && largeur <= 3)
		|| (map[hauteur][4 + largeur] == jeton && largeur >= 27))
	{
			soluce++;
			if (soluce >= 4)
				return (soluce);
	}
	free(map);
	return (soluce);
}