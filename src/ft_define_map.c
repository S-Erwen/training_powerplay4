#include "../include/ft_include.h"

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

char    **init_tab(int h, int l, char init_val)
{
    int i;
    int j;
    char **tab;

    i = 0;
    if ((tab = malloc(sizeof(char *) * (h + 1))) == NULL)
        return (NULL);
    while (i < h)
    {
        if ((tab[i] = malloc(sizeof(char) * (l + 1))) == NULL)
            return (NULL);
        j = 0;
        while (j < l)
            tab[i][j++] = init_val;
        tab[i][j] = '\0';
        i++;
    }
    tab[i] = NULL;

    i = 0;
    while (tab[i])
    {
        if (i % 2 == 0)
            strcpy(tab[i], "+---+---+---+---+---+---+---+\n");
        else
            strcpy(tab[i], "|   |   |   |   |   |   |   |\n");
        i++;
    }
    return (tab); 
}
