#pragma once

#include <juce_core/juce_core.h>

namespace juce
{
	class ConsoleOutput
	{
	public:
		//------------------------------------
		static void consoleOutput(std::string string);
		static void consoleOutput(juce::String string);
		//
		static void operator<<(std::string &string);
		static void operator<<(juce::String &string);

	protected:
		//------------------------------------

	private:
		//------------------------------------
	};
}