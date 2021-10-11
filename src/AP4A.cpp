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

	while(choice != 3) // Menu
	{
		switch(choice)
			{
				case 1: // Afficher les donnees des capteurs
				{
					interface.clear();
					scheduler.schedule(interface);
				}
					break;
				case 2: // Changer les  frequences d'actualisation des capteurs
				{
					std::cout << "Fonction pas encore implemente" << std::endl;
					interface.waitUser();
				}
				break;
				default:
					std::cout << "\nErreur du choix du menu. Fermeture du programme" << std::endl;
					choice = 0;
			}
		if(choice != 3) choice = interface.display_menu();
	}

	interface.clear();
	std::cout << "\nFermeture du programme..." << std::endl;
	return 0;
}
