/* declaration de fonctionnalites supplementaires */
#include <stdlib.h> /* EXIT_SUCCESS */
#include <stdio.h> /* printf */
#include <string.h>

/* declaration constantes et types utilisateurs */

#define N 20
#define nbr_dayoff 11

struct date{
	int jour;
	char mois[N];
	int annee;
};
	
struct date jours_feries[nbr_dayoff] = {{1, "Janvier", 2024}, {1, "Avril", 2024}, {1, "Mai", 2024}, {8, "Mai", 2024}, {9, "Mai", 2024}, {20, "Mai", 2024}, {14, "Juillet", 2024}, {15, "Aout", 2024}, {1, "Novembre", 2024}, {11, "Novembre", 2024}, {25, "Decembre", 2024}};

/* declaration de fonctions utilisateurs */

struct date lire_date();
void affiche_date(struct date ma_date);
int compare_date(struct date ma_date1, struct date ma_date2);
int est_ferie(struct date jours_feries[nbr_dayoff], struct date ma_date);

/* fonction principale */

int main()
{
	/* declaration et initialisation des variables */
	struct date ma_date;
	int resultat_final; 

	ma_date = lire_date(); 

	affiche_date(ma_date); 

	resultat_final = est_ferie(jours_feries, ma_date);

	if (ma_date.annee != 2024)
	{	
		printf("Le %d %s %d n'est pas en 2024\n", ma_date.jour, ma_date.mois, ma_date.annee);
	}
	else
	{

		if (resultat_final)
		{
			printf("Le %d %s %d est ferie\n", ma_date.jour, ma_date.mois, ma_date.annee);
		}
		else
		{
			printf("Le %d %s %d n'est pas ferie\n", ma_date.jour, ma_date.mois, ma_date.annee);
		}
	}

	/* valeur fonction */
	return EXIT_SUCCESS;
}

/* definitions des fonctions utilisateurs */

struct date lire_date()
{
	struct date d;

	printf("Saisir le jour : \n");
	scanf("%d", &d.jour); 

	printf("Saisir le mois : \n");
	scanf("%s", d.mois);

	printf("Saisir l'année : \n");
	scanf("%d", &d.annee);

	return d; 
}

void affiche_date(struct date ma_date)
{
	printf("Date saisie : %d %s %d\n", ma_date.jour, ma_date.mois, ma_date.annee);
}

int compare_date(struct date ma_date1, struct date ma_date2)
{
	if (ma_date1.jour == ma_date2.jour && strcmp(ma_date1.mois, ma_date2.mois) == 0  && ma_date1.annee == ma_date2.annee)
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}

int est_ferie(struct date jours_feries[nbr_dayoff], struct date ma_date)
{
	for (int i = 0; i < nbr_dayoff; i++)
	{
		if (jours_feries[i].jour == ma_date.jour && strcmp(jours_feries[i].mois, ma_date.mois) == 0 && jours_feries[i].annee == ma_date.annee)
		{
			return 1; 
		}
		
	}
	return 0; 
}

