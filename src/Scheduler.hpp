/**
 * @Author Cyrille Stroesser
 * @file Scheduler.hpp
 * @date 27/90/2021
 * @brief get data from humidity, light, temperature and sound at variable frequency to return it to the server
 */

#ifndef SCHEDULER_HPP_
#define SCHEDULER_HPP_

#include <iostream>
#include <fstream>
#if defined(_WIN32)
#include <windows.h>
#define wait() Sleep(1000)
#else
#include <unistd.h>
#define wait() sleep(1000)
#endif

#include "Server.hpp"
#include "Sound.hpp"
#include "Light.hpp"
#include "Temperature.hpp"
#include "Humidity.hpp"

class Scheduler {
private:
	int getTemperatureFrequency;
	int getHumidityFrequency;
	int getSoundFrequency;
	int getLightFrequency;
	int displayDataTime;
public:
	/**
	 * @brief Construct a new Scheduler object
	 * 
	 */
	Scheduler();

	/**
	 * @brief Construct a new Scheduler object
	 * 
	 * @param t temperature frequency update 
	 * @param h humidity frequency update
	 * @param s sound frequency update
	 * @param l light frequency update
	 * @param t time to display sensor's data
	 */
	Scheduler(int t, int h, int s, int l, int time);

	/**
	 * @brief Destroy the Scheduler object
	 * 
	 */
	virtual ~Scheduler();

	/**
	 * @brief get data, log them in a file and print them in the console through the server
	 * 
	 * @param server : the server use to log and print
	 */
	void schedule(Server& server);

	/**
	 * @brief change the time to display sensor's data with user input
	 *
	 */
	void changeDisplayDataTime();
};

#endif /* SCHEDULER_HPP_ */
