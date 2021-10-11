/**
 * @Author Cyrille Stroesser
 * @file Interface.cpp
 * @date 28/09/2021
 */

#include "Interface.hpp"

void Interface::display_banner()
{
	cout << "**************************************************************" << endl;
	cout << "***                                                        ***" << endl;
	cout << "***             Interface capteurs interieurs              ***" << endl;
	cout << "***                                                        ***" << endl;
	cout << "**************************************************************\n" << endl;
}

void Interface::clear()
{
	#if defined(WIN32)
	system("cls");
	#else
	system("clear");
	#endif
	display_banner();
}

int Interface::display_menu()
{
	char input;
	int choice = 0;

	while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6)
	{
		clear();
		cout << "Que voulez_vous faire ?\n" << endl;
		cout << "1. Afficher les donnees des capteurs" << endl;
		cout << "2. Changer la frequence d'actualisation de la temperature" << endl;
		cout << "3. Changer la frequence d'actualisation de l'humidite" << endl;
		cout << "4. Changer la frequence d'actualisation de la pression" << endl;
		cout << "5. Changer la frequence d'actualisation de la lumiere" << endl;
		cout << "6. Quitter l'interface" << endl;
		cout << "Entrez votre choix : " << endl;
		cin >> input;
		choice = atoi(&input);
	}

	return choice;
}

void Interface::waitUser()
{
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cout << "Appuiez sur Entrer pour continuer..." << endl;
	cin.get();
}