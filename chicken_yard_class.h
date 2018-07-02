//
#ifndef YARD
#define YARD

#include "bone_class.h"
#include <list>
using namespace std;

class ChickenYard
{

  list<Bone> deck;
  int deck_size;
  bool pop_iter;

public:
  Bone draw();
  void shuffle();
  ChickenYard();
  void printDeck();
  int getDeckSize();
};

#endif