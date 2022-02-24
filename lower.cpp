#include "lower.h"
#include <iostream>

std::string makeLower(int length){
  char asteroid = '*';
  std::string line;

  for(int i = 0; i < length; i++){
    std::cout << line << std::endl;
    line += asteroid;
  }

  return line;

}
