#include "box.h"
#include <iostream>

std::string makeBox(int width, int height){
  char asterisk = '*';
  std::string line;
  
  for(int i = 1; i <= width; i++){
    line += asterisk;
  }
    
  for(int i = 2; i <= height; i++){
    std::cout << line << std::endl;
  }

 
  return line;
}
