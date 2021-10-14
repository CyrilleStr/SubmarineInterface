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
#include <thread>
#include <chrono>
#include <ctime>
#include <string.h>

#include "Interface.hpp"
#include "Server.hpp"
#include "Sound.hpp"
#include "Sensor.hpp"
#include "Light.hpp"
#include "Temperature.hpp"
#include "Humidity.hpp"

static bool s_stop = false;

class Scheduler {
private:
	Server server;
	Humidity humidity;
	Temperature temperature;
	Light light;
	Sound sound;
	
	/**
	 * @brief Get the Data object
	 * 
	 * @param sensor 
	 */
	template <typename T> void getData(Sensor<T>* sensor_p);

public:
	/**
	 * @brief Construct a new Scheduler object
	 * 
	 */
	Scheduler();

	Scheduler(const Scheduler&);

	/**
	 * @brief Destroy the Scheduler object
	 * 
	 */
	virtual ~Scheduler();

	Scheduler& operator=(const Scheduler&);

	/**
	 * @brief get data, log them in a file and print them in the console through the server
	 * 
	 * @param i : the interface
	 */
	void schedule(Interface interface_p);

	/**
	 * @brief Open a interafce to change the frequency of each sensors 
	 * 
	 */
	// void changeSensorsFrequency(Interface interface_p);
};

#endif /* SCHEDULER_HPP_ */
