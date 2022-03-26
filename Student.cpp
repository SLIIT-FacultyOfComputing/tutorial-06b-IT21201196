#include "Student.h"
#include <iostream>

// Assign studentId and name
Student::assignDetails(int stdId,char stdName) {
  studentId=stdId;
  name=stdName;
  
}

// Display StudentId and Name
Student::display() {
  cout<<studentId<<endl;
  cout<<name<<endl;
}
