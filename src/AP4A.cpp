//============================================================================
// Name        : Project.cpp
// Author      : Cyrille Stroesser
// Version     : 1.0
// Copyright   : school license
// Description : simulator IOT
//============================================================================

#include <iostream>
#include <fstream>

#include "Interface.hpp"
#include "Server.hpp"
#include "Scheduler.hpp"

using namespace std;

int main() {
	Interface i = Interface();
	Scheduler scheduler = Scheduler(1,1,1,1,15);
	Server server = Server(true,true);

	int choice = i.display_menu();

	while(choice != 7) // Menu
	{
		switch(choice)
			{
				case 1: // Afficher les donnees des capteurs
				{
					i.clear();
					scheduler.schedule(server);
					i.waitUser();
				}
					break;
				case 2: // Changer la frequence d'actualisation de la temperature
				{
					i.clear();
					cout << "Fonction pas encore implementee\n" << endl;
					i.waitUser();
				}
				break;
				case 3: // Changer la frequence d'actualisation de l'humidite
					{
						i.clear();
						cout << "Fonction pas encore implementee" << endl;
						i.waitUser();
					}
				break;
				case 4: // Changer la frequence d'actualisation de la pression
					{
						i.clear();
						cout << "Fonction pas encore implementee" << endl;
						i.waitUser();
					}
				break;
				case 5: // Changer la frequence d'actualisation de la lumiere
					{
						i.clear();
						cout << "Fonction pas encore implementee" << endl;
						i.waitUser();
					}
				break;
				case 6:
					{
						i.clear();
						scheduler.changeDisplayDataTime();
						i.waitUser();
					}
				break;
				default:
					cout << "\nErreur du choix du menu. Fermeture du programme" << endl;
					choice = 0;
			}
		if(choice != 7) choice = i.display_menu();
	}

	i.clear();
	cout << "\nFermeture du programme..." << endl;

	i.~Interface();
	scheduler.~Scheduler();
	server.~Server();
	return 0;
}
