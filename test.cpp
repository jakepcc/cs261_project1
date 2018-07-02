#include <cstdio>
#include <iostream>
#include "bone_class.h"
#include "chicken_yard_class.h"

using namespace std;

int main()
{
  Bone bone(2, 5);
  cout << bone.getBottonNumber() << endl;
  cout << bone.getTopNumber() << endl;
  cout << bone.isDouble() << endl;

  ChickenYard yard;
  yard.printDeck();
  cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
  cout << "Suffling deck......" << endl;
  yard.shuffle();
  cout << "New deck:" << endl;
  yard.printDeck();
  cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
  int times = 0;
  while (times < 10)
  {
    Bone drawBone = yard.draw();
    cout << "Drawing a new bone..." << endl;
    drawBone.printBone(true);
    times++;
  }
  cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
};