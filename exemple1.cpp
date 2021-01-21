/***************************

*****************************/
#include <iostream>	// bibliothèque de gestion des E/S
#include <conio.h>	// gestion de la console (ici _getch())
#include <windows.h>

using namespace std;

/*****************************
Fonction principale
*****************************/
int main()	// Fonction principale
{
	SetConsoleOutputCP(1252); // pour les accents (il faut <windows.h>
	
	_getch();	// attente d'appui sur une touche
	return 0;	// fin du programme. Le code 0 est envoyé
}
