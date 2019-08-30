#include "../include/ft_include.h"

int		ft_power()
{
	char	**soluce;
	char	**print;
	int		language;
	int 	player_playing;
	int		test_larg;
	int 	nb_for_soluce;

	struct s_jeton j1;
	struct s_jeton j2;

	j1.jeton = J1_JETON;
	j2.jeton = J2_JETON;
	j1.hauteur = 11;
	j2.hauteur = 11;
	nb_for_soluce = 0;

	/* Malloc des tableau 
	 * Soluce pour remplacer les jetons par les chiffres
	 * Print pour l'utilisateur                          */

	soluce = init_tab(31, 13, ' ');
	print = init_tab(31, 13, ' ');

	/* Soluce et print == Map vide */
	soluce = ft_void_map();
	print = ft_void_map();

	language = ft_language();
	if (language == 1)
		player_playing = ft_print_menu_fr();
	else if (language == 2)
		player_playing = ft_print_menu_en();
	ft_print_map(print);
	while (nb_for_soluce != 5)
	{
		if (player_playing == 1)
		{
			j1.largeur = ft_instd(language);
			j1.largeur = ft_int_to_ptrchared(j1.largeur);
			test_larg = 0;
			while (print[j1.hauteur][j1.largeur] == j1.jeton)
			{
				while (print[1][test_larg] == j1.jeton
					|| print[1][test_larg] == j2.jeton)
				{
					if (test_larg > 30)
					{
						if (language == 1)
							ft_putstr("Plus de place la partie est fini !\n");
						else if (language == 2)
							ft_putstr("No more room, the game is over!\n");
						return (language);
					}
					test_larg++;
				}
				while (j1.hauteur > 7)
				{
					if (language == 1)
						ft_putstr("La colonne est pleine !\n");
					else if (language == 2)
						ft_putstr("The column is full! !\n");
					j1.largeur = ft_instd(language);
					j1.largeur = ft_int_to_ptrchared(j1.largeur);
				}
				j1.hauteur++;
			}

			print[j1.hauteur][j1.largeur] = j1.jeton;
			ft_putstr("test\n");
			nb_for_soluce = ft_soluce(j1.hauteur, j1.largeur, nb_for_soluce, j1.jeton);
			if (nb_for_soluce == 4)
			{
				if (language == 1)
					ft_putstr("Le joueur 1 a gagné\n");
				if (language == 2)
					ft_putstr("Player 1 win\n");

				return (language);
			}
			if (!(soluce[j1.hauteur] = (char *)malloc(sizeof(char) * 30 + 1)))
				return (0);
			soluce[j1.hauteur][j1.largeur] = nb_for_soluce;
			ft_print_map(print);
		}
	}
	return (0);
}