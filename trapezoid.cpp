#include "trapezoid.h"
#include <iostream>

std::string makeTrap(int width, int height){
  char asterisk = '*';
  std::string line;
  std::string spaces;
  int oddWidth = width + 1;
  oddWidth = oddWidth / 2;
  int evenWidth = width / 2;

  if(height > evenWidth && width % 2 == 0){
    return "Impossible shape!\n";
  }else if(width % 2 != 0 && height > oddWidth){
    return "Impossible shape!\n";
  }else if(width < 3){
    return "Impossible shape!\n";
  }else{
    for(int i = 0; i < width; i++){
      line += asterisk;
    }

    for(int i = 0; i < height; i++){
      std::cout << spaces << line << std::endl;
      //removing two asterisks
      line.erase(0, 2);
      spaces += " ";
    }
  }

  return "";
}
