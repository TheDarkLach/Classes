#include <stdio.h>
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
  vector<Media*>* AllMedia = new vector<Media*>;
  bool isRunning = true;
  while (isRunning)
  {
    char input[15];
    
    cin >> input;
    if (strcmp(input,"ADD") == 0)
    {
      cout << "yaa";
    }
    else if (strcmp(input,"QUIT") == 0)
    {
      cout << "You have quit\n";
      isRunning = false;
    }
    else
    {
      cout << "Type in one of the commands: ADD, DELETE, SEARCH";
    }
  }
}
