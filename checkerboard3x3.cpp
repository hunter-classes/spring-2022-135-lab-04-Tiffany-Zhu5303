#include "checkerboard3x3.h"
#include <iostream>
#include <string>

std::string checkerBoard(int width, int height){
  char asterisk = '*';
  std::string line, altLine;
  int position = 1;

  //to form the checkered lines
  for(int i = 0; i < width; i++){
    if(position <= 3){
      line += asterisk;
      altLine += " ";
      position ++;
    }else if(position == 6){
      line += " ";
      altLine += asterisk;
      position = 1;
    }else{
      line += " ";
      altLine += asterisk;
      position ++;
    }
  }

  position = 1;
  
  for(int i = 0; i < height; i++){
    if(position <= 3){
      std::cout << line << std::endl;
      position ++;
    }else if(position == 6){
      std::cout << altLine << std::endl;
      position = 1;
    }else{
      std::cout << altLine << std::endl;
      position ++;
    }
  }
      
  
  return "\n";
}
