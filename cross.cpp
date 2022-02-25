#include "cross.h"
#include <iostream>

std::string printSpace(int size){
  std::string space;

  if(size > 0){
    for(int i = 0; i < size; i++){
      space += space;
    }
    return space + " ";
    
  }else{
    return "";
  }
}

std::string makeCross(int size){
  //just in case
  if(size < 3){
    std::cout << "size not sufficient to create a cross" << std::endl;
  }
  
  int spaces = size - 2;
  char asterisk = '*';
  int indent = 0;
  int modSize = size - 1;

  //crosses of even size
  //top half
  if(size % 2 == 0){
   for(int i = 0; i < size/2; i++){
     std::cout << printSpace(indent) << asterisk << printSpace(spaces) << asterisk << std::endl;
     spaces = spaces - 1;
     indent++;
   }
  }else{
    for(int i = 0; i <= modSize/2; i++){
      std::cout << printSpace(indent) << asterisk << printSpace(spaces) << asterisk << std::endl;
      spaces = spaces - 2;
      indent++;
    }
  }

   //center of cross
   if(size % 2 == 0){
     std::cout << printSpace(indent) << asterisk << asterisk << std::endl;
     std::cout << printSpace(indent) << asterisk << asterisk << std::endl;
   }else{
     std::cout << printSpace(indent) << asterisk << std::endl;
   }

   indent--;
   spaces = spaces + 1;

    //bottom half
   if(size % 2 == 0){
    for(int i = 0; i < size/2; i++){
      std::cout << printSpace(indent) << asterisk << printSpace(spaces) << asterisk << std::endl;
      spaces = spaces + 2;
      indent--;
    }
   }else{
     for(int i = 0; i <= modSize/2; i++){
      std::cout << printSpace(indent) << asterisk << printSpace(spaces) << asterisk << std::endl;
      spaces = spaces + 2;
      indent--;
    }
   }

  return "\n";
}
