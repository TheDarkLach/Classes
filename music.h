#ifndef music_h
#define music_h

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
 public:
  Music();
  virtual int getType();
  char* getArtist();
  char* getPublisher();
  int* getDuration();
 private:
  char artist[30];
  char publisher[30];
  int duration;
};
#endif
