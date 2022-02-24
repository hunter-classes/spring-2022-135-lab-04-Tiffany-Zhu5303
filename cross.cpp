#include "cross.h"
#include <iostream>

std::string printSpace(int size){
  std::string space = " ";

  if(size > 0){
    for(int i = 0; i < size; i++){
      space += space;
    }
    return space;
    
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
  char asteroid = '*';
  int indent = 0;

  //crosses of even size
  //top half
   for(int i = 0; i < size/2; i++){
     std::cout << printSpace(indent) << asteroid << printSpace(spaces) << asteroid << std::endl;
     spaces = spaces - 2;
     indent++;
   }

   //center of cross
   if(size % 2 == 0){
   std::cout << printSpace(indent) << asteroid << asteroid << std::endl;
   std::cout << printSpace(indent) << asteroid << asteroid << std::endl;
   }else{
     std::cout << printSpace(indent) << asteroid << std::endl;
   }

   indent--;
   spaces++;

    //bottom half
    for(int i = 0; i < size/2 - 1; i++){
      std::cout << printSpace(indent) << asteroid << printSpace(spaces) << asteroid << std::endl;
      spaces++;
      indent--;
    }

  return "\n";
}
