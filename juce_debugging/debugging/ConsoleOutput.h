#pragma once

#include <juce_core/juce_core.h>

namespace juce
{
	class ConsoleOutput
	{
	public:
		//------------------------------------
		ConsoleOutput() = default;
		~ConsoleOutput() = default;
		//------------------------------------
		void consoleOutput(std::string string);
		void consoleOutput(juce::String string);
		//
		ConsoleOutput& operator<<(std::string &string);
		ConsoleOutput& operator<<(juce::String &string);

	protected:
		//------------------------------------

	private:
		//------------------------------------
	};
}