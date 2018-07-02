#include "chicken_yard_class.h"
#include "bone_class.h"
#include <list>
#include <iostream>
using namespace std;

ChickenYard::ChickenYard()
{
  int deck_size = 81;
  int count1 = 1;
  int count2 = 1;

  for (int i = 0; i < deck_size; i++)
  {
    if (count1 <= 9)
    {
      Bone newBone(count1, count2);
      cout << count1 << "/" << count2 << endl;
      deck.push_back(newBone);
      count1++;
    }
    else if (count1 > 9 && count2 < 9)
    {
      count1 = 1;
      count2++;
    }
  };
};

void ChickenYard::printDeck()
{
  cout << deck.size() << endl;
  cout << deck.front().getTopNumber() << endl;
  cout << deck.back().getTopNumber() << endl;
};