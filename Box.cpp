#include "Box.h"

// Implement setters and getters
void Box::setLength(int n1){
  length=n1;
}
void Box::setWidth(int n2){
  width=n2;
}
void Box::setHeight(int n3){
  height=n3;
}
int Box::getLength(){
  return length;
}
int Box::getWidth(){
  return width;
}
int Box::getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  int volume=length*width*height;
  return volume;
}
