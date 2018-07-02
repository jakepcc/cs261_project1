#include "chicken_yard_class.h"
#include "bone_class.h"
#include <list>
#include <iostream>
using namespace std;

ChickenYard::ChickenYard()
{
  deck_size = 81;
  int count1 = 1;
  int count2 = 1;
  //a property to semi randomize drawing a card
  pop_iter = false;
  //There is a current bug in the logic. There should be 81 bones in the deck, but the code is only generating 73;
  for (int i = 0; i < deck_size; i++)
  {
    if (count1 <= 9)
    {
      Bone newBone(count1, count2);
      deck.push_back(newBone);
      count1++;
    }
    else if (count1 > 9 && count2 <= 9)
    {
      count1 = 1;
      count2++;
    }
  };
};

int ChickenYard::getDeckSize()
{
  return deck.size();
}

void ChickenYard::printDeck()
{
  for (Bone b : deck)
  {
    b.printBone();
  };
};

Bone ChickenYard::draw()
{
  if (pop_iter)
  {
    pop_iter = !pop_iter;
    Bone topItem = deck.front();
    deck.pop_front();
    return topItem;
  }
  else
  {
    pop_iter = !pop_iter;
    Bone backItem = deck.back();
    deck.pop_back();
    return backItem;
  }
};

void ChickenYard::shuffle()
{
  list<Bone> shuffledDeck;
  bool tick = false;
  while (deck.size() > 0)
  {
    if (tick)
    {
      Bone item = deck.front();
      deck.pop_front();
      shuffledDeck.push_back(item);
      tick = !tick;
    }
    else
    {
      Bone item = deck.back();
      deck.pop_back();
      shuffledDeck.push_back(item);
      tick = !tick;
    }
  }
  deck = shuffledDeck;
};
