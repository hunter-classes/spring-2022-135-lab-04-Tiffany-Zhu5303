#include "checkerboard.h"
#include <iostream>

std::string makeBoard(int width, int height){
  char asterisk = '*';
  std::string line, altLine;

  //to create the first line
  for(int i = 1; i <= width; i++){
    line += asterisk;
    line += " ";
  }
  
  //to create the alternating line
  for(int i = 1; i < width; i++){
    altLine += " ";
    altLine += asterisk;
  }

  //to print the lines taking odd/even height into account
  if(height % 2 != 0){
    int modheight = height - 1;
    for(int i = 1; i <= modheight / 2; i++){
      std::cout << line << std::endl;
      std::cout << altLine << std::endl;
    }

    return line;
  }else{
    for(int i = 0; i < height/2; i++){
      std::cout << line << std::endl;
      std::cout << altLine << std::endl;
    }
    
      return "\n";
  }
}
