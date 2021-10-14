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
		 * @brief Copy constructor
		 * 
		 */
		Server(const Server& server_p);

		/**
		 * @brief Destroy the Server object
		 * 
		 */
		virtual ~Server();

		/**
		 * @brief Operation overload =
		 *
		 */
		Server& operator=(const Server& server_p);

		/**
		 * @brief 
		 * 
		 * @param sensor_p 
		 * @param now_p 
		 */
		template <typename T> void fileWrite(Sensor<T>* sensor_p,const time_t now_p);

		/**
		 * @brief 
		 * 
		 * @param sensor_p 
		 * @param now_p 
		 */
		template <typename T> void consolWrite(Sensor<T>* sensor_p,const time_t now_p);
		
		/**
		 * @brief change the status of the console activation
		 * 
		 * @param status_p the status
		 */
		void changeStatusConsol(bool status_p);

		/**
		 * @brief change the status of the log activation
		 * 
		 * @param status_p the status
		 */
		void changeStatusLog(bool status_p);

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
