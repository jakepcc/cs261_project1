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
};