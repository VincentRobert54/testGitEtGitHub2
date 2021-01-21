/***************************
Test de la fonction 1 bis
*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>

using namespace std;

/*****************************
Fonction 1
*****************************/
void fonction1()
{
	//... ici se trouvera le code de la fonction 1 que je veux tester
}

/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{
	SetConsoleOutputCP(1252);

	fonction1(); // appel de la fonction1 pour vérifier son fonctionnement

	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}
