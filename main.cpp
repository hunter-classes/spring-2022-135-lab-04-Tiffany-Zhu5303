#include <iostream>
#include <string>

#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"

int main(){
  //Task A -> print a box with given width and height
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

  //Task B -> Print a checkerboard with given width and height
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

  //Task C -> Print a diagonal cross with given size
  int size = 4;

  std::cout << "\nTask C:\nInput size: " << size << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  std::string cross;
  cross = makeCross(size);

  std::cout << cross << std::endl;

  //Tast D -> print the lower bottom diagonal of a square given a length
  int length = 15;

  std::cout << "\nTask D:\nInput side length: " << length << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  std::string lower;
  lower = makeLower(length);

  std::cout << lower << std::endl;

  //Task E -> print the upper top diagonal of a square given a length
  length = 11;

  std::cout << "\nTask E:\nInput side length: " << length << std::endl;
  std::cout << "\nresult\n----------------------------\n" << std::endl;
  
  std::string upper;
  upper = makeUpper(length);

  std::cout << upper << std::endl;
  
  return 0;
}
