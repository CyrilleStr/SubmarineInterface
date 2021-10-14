/**
 * @Author Cyrille Stroesser
 * @file Scheduler.cpp
 * @date 27/90/2021
 */

#include "Scheduler.hpp"

Scheduler::Scheduler() : 
	server(Server()),
	humidity(Humidity()),
	temperature(Temperature()),
	light(Light()),
	sound(Sound())
{};

Scheduler::Scheduler(const Scheduler& s)
{
	this->server = s.server;
	this->humidity = s.humidity;
	this->temperature = s.temperature;
	this->light = s.light;
	this->sound = s.sound;
}

Scheduler::~Scheduler() {}

Scheduler& Scheduler::operator=(const Scheduler& s)
{
	this->server = s.server;
	this->humidity = s.humidity;
	this->temperature = s.temperature;
	this->light = s.light;
	this->sound = s.sound;
	return *this;
}

void Scheduler::schedule(Interface interface_p)
{
	std::cout << "Pour arreter le programme, appuiez sur Entrer" << std::endl;
	interface_p.waitUser();

	s_stop = false;

	std::thread tTemperature(&Scheduler::getData<int>,this,&this->temperature);
	std::thread tHumidity(&Scheduler::getData<int>,this,&this->humidity);
	std::thread tSound(&Scheduler::getData<float>,this,&this->sound);
	std::thread tLight(&Scheduler::getData<bool>,this,&this->light);

	// Wait for the user to press Enter to stop
	std::cin.get();
	s_stop = true;
	tTemperature.join();
	tHumidity.join();
	tSound.join();
	tLight.join();
}

template <typename T> void Scheduler::getData(Sensor<T>* sensor_p)
{
	while(!s_stop)
	{
		if(this->server.getStatusConsol())
			this->server.consolWrite<T>(sensor_p,time(0));
		if(this->server.getStatusLog())
			this->server.fileWrite<T>(sensor_p,time(0));
		std:this_thread::sleep_for(std::chrono::milliseconds(sensor_p->getFrequency()));
	}
}

// void Scheduler::changeSensorsFrequency(Interface interface_p)
// {
	
// 	std::string dataNames[4] = {"de la temperature","de l'humidite","du son","de la lumiere"};
// 	Sensor<> sensors[4] = {this->temperature,this->humidity,this->sound,this->sound};
// 	for (size_t i = 0; i < 4; i++)
// 	{
// 		int frequency = -1;
// 		while(frequency > 100000 || frequency < 100)
// 		{
// 			string input;
// 			interface_p.clear();
// 			std::cout << "A quelle frequence voulez vous actualiser les donnees " << dataNames[i] << " ? (Reponse en ms entre 100 et 100000ms)" << std::endl;
// 			std::cin >> input;
// 			frequency = stoi(input);
// 		}
// 		sensors[i].changeFrequency(frequency);
// 		interface_p.waitUser();
// 	}
// }
