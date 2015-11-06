#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#include <string>

struct CommandLineInfo {
  std::string input_file_name;
  std::string output_file_name;
  bool decrypt;
  long key;
};


void processCommandLine(int argc, char *argv[], CommandLineInfo& info);




#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
