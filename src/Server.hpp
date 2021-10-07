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

class Server
{
private:
	bool consolActivation;
	bool logActivation;
	std::ofstream temperatureLogFile;
	std::ofstream humidityLogFile;
	std::ofstream soundLogFile;
	std::ofstream lightLogFile;

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
	 * @brief write the given data in the log file ("log.txt")
	 * 
	 * @param dataType the data type (1=temperature, 2=humidity, 3=sound, 4=light)
	 * @param dataValue the data value
	 * @param time the current time (in seconds)
	 * @param logFile the log file
	 */
	void fileWrite(int dataType, int dataValue, int time);

	/**
	 * @brief write the fiven data int the console
	 * 
	 * @param dataType the data type (1=temperature, 2=humidity, 3=sound, 4=light)
	 * @param dataValue the data value
	 */
	void consolWrite(int dataType, int dataValue);

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

	/**
	 * @brief Get the Data Name object
	 *
	 * @param dataType data type (1=temperature, 2=humidity, 3=sound, 4=light)
	 * @return char* : the name of the data type
	 */
	char* getDataName(int dataType);
};

#endif /* SERVER_HPP_ */
