#ifndef game_H//If not defined
#define game_H//Define

#include <iostream>
#include "media.h"

using namespace std;

class Game : public Media {
  
 public:
  Game(char* newTitle,int newYear, char* newPublisher,int newRating);
  
    //Virtual functions
    virtual int getType();
    char* getTitle();
    int getYear();
    char* getPublisher();
    int getRating();

    //Variables ,Should be Private
  private:
    char title[50];//Character Array
    int year;
    char publisher[50];//Character Array
    int rating;
};
#endif
