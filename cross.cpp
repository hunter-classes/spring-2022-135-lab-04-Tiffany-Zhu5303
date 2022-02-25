#include "cross.h"
#include <iostream>

std::string makeCross(int size){
  char asterisk = '*';

  if(size < 3){
    
    std::cout << "Impossible size!";
    return "\n";
    
  }else{
  //for each row
  for(int i = 0; i < size; i++){
    std::string line;
    //for each column
    for(int n = 0; n < size; n++){
      if(i == n || n == size - 1 - i){
	line += asterisk;
      }else{
	line += " ";
      }
    }
    std::cout << line << std::endl;
  }

  return "\n";
  }
}
