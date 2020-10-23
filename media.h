#ifndef media
#define media

#include <iostream>
#include <cstring>

class Media{
 public:
  Media();
  //Function Declarations
  virtual int getType();
  char* getTitle();
  int getYear();
  void setYear();
  void setTitle();

 private: 
  char title[100];
  int year;
};

#endif
