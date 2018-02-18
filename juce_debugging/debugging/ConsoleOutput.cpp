#include "ConsoleOutput.h"

namespace juce
{
	static void consoleOutput(std::string string)
	{
		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::MacOSX)
		{
			std::cout << string << "\n";
		}

		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::Windows)
		{
			OutputDebugStringA(string.c_str());
			OutputDebugStringA("\n");
		}
	}

	static void consoleOutput(juce::String string)
	{
		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::MacOSX)
		{
			std::cout << string << "\n";
		}

		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::Windows)
		{
			OutputDebugStringA(string.toStdString().c_str());
			OutputDebugStringA("\n");
		}
	}

	static void operator<<(ConsoleOutput &cout, std::string &string)
	{
		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::MacOSX)
		{
			std::cout << string << "\n";
		}

		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::Windows)
		{
			OutputDebugStringA(string.c_str());
			OutputDebugStringA("\n");
		}
	}

	static void operator<<(ConsoleOutput &cout,  juce::String &string)
	{
		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::MacOSX)
		{
			std::cout << string << "\n";
		}

		if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::Windows)
		{
			OutputDebugStringA(string.toStdString().c_str());
			OutputDebugStringA("\n");
		}
	}
}