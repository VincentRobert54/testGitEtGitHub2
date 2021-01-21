/***************************
Test de la fonction 2
*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>

using namespace std;

/*****************************
Fonction 2
*****************************/
int fonction2()
{
	//... ici se trouvera le code de la fonction 1 que je veux tester
}

/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{
	SetConsoleOutputCP(1252);

	cout << fonction2(); // appel de la fonction2 pour vérifier son fonctionnement

	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}
