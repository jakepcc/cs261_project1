// The "playing card" that has two sides showing the numbers assiged to that particular card
// values for both sides is within the range of 1-9
// The bone can be created
//bones have 4 sides. Top, Botton, Left and Right. Top and Bottom hold the numbers. Left and Right have a reference to both ends and can only be attached to if the bone is a double

// Properties
// double: boolean
// top: int
// bottom: int

// Actions
// create
// turn(direction): boolean, resulting orientation
#include <cstdio>
using namespace std;
#include "bone_class.h"

Bone::Bone(int _top_number, int _bottom_number)
{
  top_number = _top_number;
  bottom_number = _bottom_number;
  if (_top_number == _bottom_number)
  {
    _double = true;
  }
  else
  {
    _double = false;
  }
};

int Bone::getTopNumber()
{
  return top_number;
}

int Bone::getBottonNumber()
{
  return bottom_number;
}

bool Bone::isDouble()
{
  return _double;
}
