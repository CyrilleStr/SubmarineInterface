//============================================================================
// Name        : Project.cpp
// Author      : Cyrille Stroesser
// Version     : 1.0
// Copyright   : school license
// Description : simulator IOT
//============================================================================

#include <iostream>

#include "Interface.hpp"
#include "Scheduler.hpp"

int main() {
	Scheduler scheduler = Scheduler();
	Interface interface = Interface();

	int choice = interface.display_menu();

	while(choice != 6) // Menu
	{
		switch(choice)
			{
				case 1: // Afficher les donnees des capteurs
				{
					interface.clear();
					scheduler.schedule(interface);
					interface.waitUser();
				}
					break;
				case 2: // Changer la frequence d'actualisation de la temperature
				{
					interface.clear();
					std::cout << "Fonction pas encore implementee\n" << std::endl;
					interface.waitUser();
				}
				break;
				case 3: // Changer la frequence d'actualisation de l'humidite
					{
						interface.clear();
						std::cout << "Fonction pas encore implementee" << std::endl;
						interface.waitUser();
					}
				break;
				case 4: // Changer la frequence d'actualisation de la pression
					{
						interface.clear();
						std::cout << "Fonction pas encore implementee" << std::endl;
						interface.waitUser();
					}
				break;
				case 5: // Changer la frequence d'actualisation de la lumiere
					{
						interface.clear();
						std::cout << "Fonction pas encore implementee" << std::endl;
						interface.waitUser();
					}
				break;
				default:
					std::cout << "\nErreur du choix du menu. Fermeture du programme" << std::endl;
					choice = 0;
			}
		if(choice != 6) choice = interface.display_menu();
	}

	interface.clear();
	std::cout << "\nFermeture du programme..." << std::endl;
	return 0;
}
