/**
 * @Author Cyrille Stroesser
 * @file Scheduler.cpp
 * @date 27/90/2021
 */

#include "Scheduler.hpp"

using namespace std;

Scheduler::Scheduler():
	getTemperatureFrequency(1),
	getHumidityFrequency(1),
	getSoundFrequency(1),
	getLightFrequency(1),
	displayDataTime(15)
{};

Scheduler::Scheduler(int t, int h, int s, int l, int time):
	getTemperatureFrequency(t),
	getHumidityFrequency(h),
	getSoundFrequency(s),
	getLightFrequency(l),
	displayDataTime(time)
{};

Scheduler::~Scheduler() {}

void Scheduler::schedule(Server& server)
{
	int temperatureCounter = 0,
			humidityCounter = 0,
			soundCounter = 0,
			lightCounter = 0;

	Temperature temperature = Temperature();
	Light light = Light();
	Humidity humidity = Humidity();
	Sound sound = Sound();

	for(int i = 0; i<this->displayDataTime+1 ; i++)
	{
		std::cout << "**********" << "Temps: " << i << " secondes" << "**********" << endl;

		if(temperatureCounter >= this->getTemperatureFrequency)
		{
			temperatureCounter = 0;
			if(server.getStatusConsol())
				server.consolWrite(temperature.getDataType(), temperature.getData());
			if(server.getStatusLog())
				server.fileWrite(temperature.getDataType(), temperature.getData(),i);
		}

		if(humidityCounter >= this->getHumidityFrequency)
		{
			humidityCounter = 0;
			if(server.getStatusConsol())
				server.consolWrite(humidity.getDataType(), humidity.getData());
			if(server.getStatusLog())
				server.fileWrite(humidity.getDataType(), humidity.getData(),i);
		}

		if(soundCounter >= this->getSoundFrequency)
		{
			soundCounter = 0;
			if(server.getStatusConsol())
				server.consolWrite(sound.getDataType(), sound.getData());
			if(server.getStatusLog())
				server.fileWrite(sound.getDataType(), sound.getData(),i);
		}

		if(lightCounter >= this->getLightFrequency)
		{
			lightCounter = 0;
			if(server.getStatusConsol())
				server.consolWrite(light.getDataType(), light.getData());
			if(server.getStatusLog())
				server.fileWrite(light.getDataType(), light.getData(),i);
		}

		temperatureCounter++;
		humidityCounter++;
		soundCounter++;
		lightCounter++;
		wait();
	}
}

void Scheduler::changeDisplayDataTime()
{
	char input;
	int time;

	std::cout << "Pendant combien de secondes voulez affichez les donnees des capteurs" << std::endl;
	std::cin >> input;
	time = atoi(&input);

	while (time > 100 || time == 0)
	{
		std::cout << "Vous ne pouvez pas afficher des donnees pendant plus de 100 secondes" << std::endl;
		std::cout << "Pendant combien de secondes voulez affichez les donnees des capteurs" << std::endl;
		std::cin >> input;
		time = atoi(&input);
	}

	this->displayDataTime = time;
}






