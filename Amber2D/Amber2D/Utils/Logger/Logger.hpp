#pragma once
#include <iostream>
#include <sstream>

namespace Amber2D
{
	class Logger
	{
	public:
		LogMessage operator()();

		void flush(const LogMessage& message);
	};

	class LogMessage
	{
	public:
		template <typename T>
		inline LogMessage& operator<<(const T& value)
		{
			m_buffer << value;
			return *this;
		}

		inline LogMessage& operator<<(std::ostream& (*fn)(std::ostream& os))
		{
			fn(m_buffer);
			return *this;
		}
	private:
		std::ostringstream m_buffer;

	private:
		friend class Logger;

		LogMessage(Logger* owner)
		{ }
	public:
		~LogMessage()
		{ }

	private:
		Logger *m_pOwner;
	};
}