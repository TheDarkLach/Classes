#include <iostream>
#include <cstring>
#include "media.h"
#include "game.h"

using namespace std;

game::game()
{

}

char* game::getPublisher(){
  return publisher;
}

float* game::getRating(){
  return &rating;
}

int game::getType(){
  return 2;
}
