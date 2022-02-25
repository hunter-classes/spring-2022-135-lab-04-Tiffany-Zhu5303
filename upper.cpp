#include "upper.h"
#include <iostream>

std::string makeUpper(int length){
  char asterisk = '*';
  std::string line = "";
  int count = 0;
  std::string space = "";

  for(int i = 0; i < length; i++){
    line += asterisk;
    count++;
  }

  for(int i = 0; i < length; i++){
    std::cout << space << line << std::endl;
    line = line.substr(1,std::string::npos);
    space += " ";
  }

  return line;
}
