#include "ConsoleOutput.h"

static void(std::string string)
{
	if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::MacOSX)

	{
		std::cout << message.getDescription() << "\n";
	}

	if (SystemStats::getOperatingSystemType() && SystemStats::OperatingSystemType::Windows)

	{
		OutputDebugStringA(message.getDescription().toStdString().c_str());
		OutputDebugStringA("\n");
	}
}