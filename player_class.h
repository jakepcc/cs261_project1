#ifndef PLAYER
#define PLAYER

#include "bone_class.h"
#include "chicken_yard_class.h"
#include <list>
#include <string>
using namespace std;

class Player
{

  list<Bone> hand;
  string name;
  int max_hand_size;

private:
  Player();

public:
  bool draw(ChickenYard &deck); //from the chicken yard
  void drawOpeningHand(ChickenYard &deck);
  Player(string _name, int _max_hand_size = 7);
  void printHand();
  void printPoints();
  int getCurrentPoints();
  void playBone();
  // Bone getLargestDouble();
  void setMaxHandSize(int _size);
  void printPlayerInfo();
};

#endif
