#include "../include/ft_include.h"

int		ft_language()
{
	int		language;

	language = 0;
	ft_putstr("Select language : \n");
	ft_putstr("FR : 1 \n");
	ft_putstr("EN : 2 \n");
	scanf("%d", &language);
	while (language != 1 && language != 2)
	{
		ft_putstr("Between 1 & 2 \n");
		ft_putstr("FR : 1 \n");
		ft_putstr("EN : 2 \n");
		scanf("%d", &language);
	}
	return (language);
}

void	ft_print_map(char **map)
{
	ft_putstr("  1   2   3   4   5   6   7\n");
	ft_putstrs(map);
	ft_putstr("  1   2   3   4   5   6   7\n");
}

int		ft_instd(int language)
{
	int jeton;

	jeton = 0;
	if (language == 1)
	{
		ft_putstr("Choisi ou tu veux placer ton jeton\n");
		scanf("%d", &jeton);
		while (jeton < 0 && jeton > 8)
		{
			ft_putstr("Entre 1 & 7\n");
			scanf("%d", &jeton);
		}
	}

	if (language == 2)
	{
		ft_putstr("Choose where you want to place your token\n");
		scanf("%d", &jeton);
		while (jeton < 0 && jeton > 8)
		{
			ft_putstr("Between 1 & 7\n");
			scanf("%d", &jeton);
		}
	}
	return (jeton);
}

int		ft_print_menu_fr()
{
	int 	player;
	char 	plr1[256];
	char	plr2[256];

	player = 0;
	ft_putstr("== Bienvenue au jeu: Puissance 4 == \n");
	ft_putstr("Le mode solo vs IA (bientot)\n");
	ft_putstr("Pseudo du joueur 1 :\n");
	scanf("%s", plr1);
	ft_putstr("Et le pseudo du joueur 2 :\n");
	scanf("%s", plr2);
	ft_putstr("Choix aleatoire du joueur qui commence :\n");
	
	//srand(time(NULL));
	//player = (rand() % (2 - 1)) + 1;
	player = 1;
	
	ft_putstr("3..\n");
	sleep(1);
	ft_putstr("2..\n");
	sleep(1);
	ft_putstr("1..\n");
	sleep(1);
	if (player == 1)
		ft_putstr(plr1);
	else
		ft_putstr(plr2);
	ft_putstr(" commence :\n");
	return (player);
}

int		ft_print_menu_en()
{
	int 	player;
	char 	plr1[256];
	char	plr2[256];

	player = 0;
	ft_putstr("== Welcome to the game: Power 4 == \n");
	ft_putstr("Solo vs IA (coming soon)\n");
	ft_putstr("Player 1 Nickname :\n");
	scanf("%s", plr1);
	ft_putstr("And the nickname of player 2 :\n");
	scanf("%s", plr2);
	ft_putstr("Random selection of the starting player :\n");
	srand(time(NULL));
	player = (rand() % (2 - 1)) + 1;
	ft_putstr("3..\n");
	sleep(1);
	ft_putstr("2..\n");
	sleep(1);
	ft_putstr("1..\n");
	sleep(1);
	if (player == 1)
		ft_putstr(plr1);
	else
		ft_putstr(plr2);
	ft_putstr(" start :\n ");

	return (player);
}
