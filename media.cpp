#include <stdio.h>
#include <iostream>
#include <cstring>

#include "media.h"
#include "game.h"

using namespace std;

Media::Media(){
	cout << "Media created";
};

int getType(){
  return 0;
}

char* getTitle(){
  return title;
  //Same as return &title[0]
}

 int getYear(){
  return year;
}

void setYear(int newYear){
  year = newYear;
}

void setTitle(char* newTitle){
  strcpy(title,newTitle);
}
