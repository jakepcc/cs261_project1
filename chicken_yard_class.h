//
#include "bone_class.h"
#include <list>
using namespace std;

class ChickenYard
{

  list<Bone> deck;
  int current_count;

public:
  Bone draw();
  // void shuffle(list _deck);
  ChickenYard();
  void printDeck();
};
