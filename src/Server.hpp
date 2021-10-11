/**
 * @Author Cyrille Stroesser
 * @file Server.hpp
 * @date 29/90/2021
 * @brief receive data from the scheduler to write it in the console or in the log file.
 */


#ifndef SERVER_HPP_
#define SERVER_HPP_

#include <iostream>
#include <fstream>
#include <ctime>
#include "Sensor.hpp"

class Server
{
private:
	bool m_consolActivation;
	bool m_logActivation;

public:
	/**
	 * @brief Construct a new Server object
	 * 
	 */
	Server();

	/**
	 * @brief Construct a new Server object
	 * 
	 * @param consolActivation : the status of the console activation
	 * @param logActivation : the status of the log activation
	 */
	Server(bool consolActivation, bool logActivation);

	/**
	 * @brief Copy constructor
	 * 
	 */
	Server(const Server& s);

	/**
	 * @brief Operation overload =
	 *
	 */
	void operator=(Server& s);

	/**
	 * @brief Destroy the Server object
	 * 
	 */
	virtual ~Server();

	/**
	 * @brief 
	 * 
	 * @param sensor_p 
	 * @param now_p 
	 */
	void fileWrite(Sensor sensor_p,const time_t now_p);

	/**
	 * @brief 
	 * 
	 * @param sensor_p 
	 * @param now_p 
	 */
	void consolWrite(Sensor sensor_p,const time_t now_p);

	/**
	 * @brief change the status of the console activation
	 * 
	 * @param status the status
	 */
	void changeStatusConsol(bool status);

	/**
	 * @brief change the status of the log activation
	 * 
	 * @param status the status
	 */
	void changeStatusLog(bool status);

	/**
	 * @brief Get the Status Consol object
	 * 
	 * @return true : the console is activated
	 * @return false : the console isn't activated
	 */
	bool getStatusConsol();

	/**
	 * @brief Get the Status Log object
	 * 
	 * @return true : the log is activated
	 * @return false : the log isn't activated
	 */
	bool getStatusLog();
};

#endif /* SERVER_HPP_ */
