#include <iostream>
#include <string>
#include <fstream>

// My project headers
#include "TransformChar.hpp"
#include "ProcessCommandLine.hpp"
#include "CaesarCipher.hpp"

int main(int argc, char *argv[])
{
  CommandLineInfo info;
  processCommandLine(argc,argv,info);
  
  std::string in{""};
  char in_char{'x'};

  if(info.input_file_name == "")
    {
      while(std::cin >> in_char) // Builds output from input
	{
	  in += transformChar(in_char);
	}
    }
  else
    {
      // Read input from file
      std::ifstream in_file {info.input_file_name};
      bool ok_to_read = in_file.good();
      if(ok_to_read == true)
	{
	  while(in_file >> in_char) // Builds output from input
	    {
	      in += transformChar(in_char);
	    }
	}
      else std::cout<<"ERROR READING INPUT FILE!!!"<<std::endl;
      in_file.close();
    }

  CaesarCipherClass cipher{info.key};
  
  cipher.caesarCipher(info.decrypt, in);

  if(info.output_file_name == "")
    {
      std::cout<<in<<std::endl; // Outputs desired output
    }
  else
    {
      std::ofstream out_file {info.output_file_name};
      bool ok_to_write = out_file.good();
      if(ok_to_write == true) out_file << in;
      else std::cout<<"ERROR WRITING TO OUTPUT FILE!!!"<<std::endl;
      out_file.close();
    }

  return 0;
}
