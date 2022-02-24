#include <iostream>
#include <string>

#include "box.h"
#include "checkerboard.h"

int main(){
  //Task A
  //Test 1
  int width = 5;
  int height = 3;

  std::cout << "Task A:\nInput width: " << width << "\nInput height: " << height << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  std::string box;
  box = makeBox(width, height);

  std::cout << box << std::endl;

  //Test 2

  width = 4;
  height = 18;

  std::cout << "\nInput width: " << width << "\nInput height: " << height << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  box = makeBox(width, height);
  std::cout << box << std::endl;

  //Task B
  //Test 1 -> height is odd
  width = 5;
  height = 9;

  std::cout << "\nTask B:\nInput width: " << width << "\nInput height: " << height << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  std::string checkerboard;
  checkerboard = makeBoard(width, height);

  std::cout << checkerboard << std::endl;

  //Test 2 -> height is even
  width = 17;
  height = 6;

  std::cout << "\nInput width: " << width << "\nInput height: " << height << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  checkerboard = makeBoard(width, height);
  std::cout << checkerboard << std::endl;

  
  return 0;
}
