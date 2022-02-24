#include "upper.h"
#include <iostream>

std::string makeUpper(int length){
  char asteroid = '*';
  std::string line = "";
  int count = 0;

  for(int i = 0; i < length; i++){
    line += asteroid;
    count++;
  }

  for(int i = 0; i < length; i++){
    std::cout << line << std::endl;
    line = line.substr(1,std::string::npos);
  }

  return line;
}
