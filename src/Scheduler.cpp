/**
 * @Author Cyrille Stroesser
 * @file Scheduler.cpp
 * @date 27/90/2021
 */

#include "Scheduler.hpp"

static bool s_stop = false;

Scheduler::Scheduler() : 
	server(Server(true,true)),
	humidity(Humidity()),
	temperature(Temperature()),
	light(Light()),
	sound(Sound())
{};

Scheduler::~Scheduler() {}

void Scheduler::schedule(Interface interface_p)
{
	std::cout << "Pour arreter le programme, appuiez sur Entrer" << std::endl;
	interface_p.waitUser();

	s_stop = false;

	std::thread tTemperature(&Scheduler::getData,this,this->temperature);
	std::thread tHumidity(&Scheduler::getData,this,this->humidity);
	std::thread tSound(&Scheduler::getData,this,this->sound);
	std::thread tLight(&Scheduler::getData,this,this->light);

	// Wait for the user to press Enter to stop
	std::cin.get();
	s_stop = true;

	tTemperature.join();
	tHumidity.join();
	tSound.join();
	tLight.join();
}

void Scheduler::getData(Sensor sensor_p)
{
	while(!s_stop)
	{
		if(this->server.getStatusConsol()) 
			this->server.consolWrite(sensor_p,time(0));
		if(this->server.getStatusLog())
			this->server.fileWrite(sensor_p,time(0));
		std:this_thread::sleep_for(std::chrono::milliseconds(sensor_p.getFrequency()));
	}
}