#include "../include/ft_include.h"

int		ft_retry(int language)
{
	int 	retry;

	retry = 0;
	if (language == 1)
	{
		ft_putstr("Veux-tu rejouer ?\n");
		ft_putstr("1. Oui\n2. Non\n");
	}
	else if (language == 2)
	{
		ft_putstr("Do you want to play again ?\n");
		ft_putstr("1. Yes\n2. No\n");	
	}
	scanf("%d", &retry);
	while (retry != 1 || retry != 2)
	{
		if (language == 1)
			ft_putstr("Entre 1 & 2\n");
		else if (language == 2)
			ft_putstr("Between 1 & 2\n");
		scanf("%d", &retry);
	}
	if (retry == 2)
		ft_putstr("Partie terminée\n");
	return (retry);
}

int main()
{
	int 	retry;
	int 	language;

	retry = 1;
	while (retry == 1)
		{
			language = ft_power();
			retry = ft_retry(language);
		}
	return (0);
}