#include <iostream>
#include <string>
#include "ProcessCommandLine.hpp"
void processCommandLine(int argc, char *argv[], CommandLineInfo& Info)
{
  for(int i=0; i<argc; i++) // Acts on command line arguments
    {
      const std::string argument {argv[i]};
      if(argument == "-h" || argument == "--help") std::cout << "Use -k to add key and -d to switch to decrypt mode." << std::endl;
      if(argument == "-v" || argument == "--version") std::cout << "Version 2.1" << std::endl;
      if(argument == "-i" || argument == "--input")
	{
	  i++;
	  Info.input_file_name = argv[i];
	  continue;
	}
      if(argument == "-o" || argument == "--output")
	{
	  i++;
	  Info.output_file_name = argv[i];
	  continue;
	}
      if(argument == "-d" || argument == "--decrypt") {
	Info.decrypt = true;
      }
      if(argument == "-k" || argument == "--key")
	{
	  i++;
	 Info. key = std::stoi(argv[i]);
	  continue;
	}
    }
}
