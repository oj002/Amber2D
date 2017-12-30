#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#if __has_include(<Windows.h>)
#include <Windows.h>
#define setConsoleTextColor(color) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
#else
#define setConsoleTextColor(color) 
#endif

namespace Amber
{
	namespace logger
	{
		typedef unsigned char byte;

		enum class logLevel : unsigned short
		{
			error = 0,
			warning = 1,
			info = 2
		};
		static logLevel m_logLevel = logLevel::info;

		inline void setLogLevel(logLevel logLevel)
		{
			m_logLevel = logLevel;
		}

		template<typename T>
		void logError(T str)
		{
			setConsoleTextColor(12);
			std::stringstream ss;
			if (m_logLevel >= logLevel::error)
			{
				ss << "[ERROR] " << str;
			}
			std::puts(ss.str().c_str());
			setConsoleTextColor(15);
		}

		template<typename T>
		void logWarning(T str)
		{
			setConsoleTextColor(11);
			std::stringstream ss;
			if (m_logLevel >= logLevel::error)
			{
				ss << "[WARNING] " << str;
			}
			std::puts(ss.str().c_str());
			setConsoleTextColor(15);
		}

		template<typename T>
		void logInfo(T str)
		{
			setConsoleTextColor(14);
			std::stringstream ss;
			if (m_logLevel >= logLevel::error)
			{
				ss << str;
			}
			std::puts(ss.str().c_str());
			setConsoleTextColor(15);
		}
	}
}