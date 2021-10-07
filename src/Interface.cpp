/**
 * @Author Cyrille Stroesser
 * @file Interface.cpp
 * @date 29/90/2021
 */

#include "Interface.hpp"

using namespace std;

Interface::Interface() {
	// TODO Auto-generated constructor stub

}

Interface::~Interface() {
	// TODO Auto-generated destructor stub
}

void Interface::clear()
{
	#if defined(WIN32)
	system("cls");
	#else
	system("clear");
	#endif
	this->display_banner();
}

void Interface::display_banner()
{
	cout << "**************************************************************" << endl;
	cout << "***                                                        ***" << endl;
	cout << "***             Interface capteurs interieurs              ***" << endl;
	cout << "***                                                        ***" << endl;
	cout << "**************************************************************\n" << endl;
}

int Interface::display_menu()
{
	char input;
	int choice = 0;

	while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6 && choice != 7)
	{
		this->clear();
		cout << "Que voulez_vous faire ?\n" << endl;
		cout << "1. Afficher les donnees des capteurs" << endl;
		cout << "2. Changer la frequence d'actualisation de la temperature" << endl;
		cout << "3. Changer la frequence d'actualisation de l'humidité" << endl;
		cout << "4. Changer la frequence d'actualisation de la pression" << endl;
		cout << "5. Changer la frequence d'actualisation de la lumiere" << endl;
		cout << "6. Changer le temps d'afficher des donnees des capteurs" << endl;
		cout << "7. Quitter l'interface\n" << endl;
		cout << "Entrez votre choix : " << endl;
		cin >> input;
		choice = atoi(&input);
	}

	return choice;
}

void Interface::waitUser()
{
	char input = '\0';
	do
	{
		cout << "Appuiez sur une touche et Entrer pour continuer..." << endl;
		cin >> input;
	} while(input == '\0');

}

