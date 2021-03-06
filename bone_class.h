#ifndef BONE
#define BONE

class Bone
{
  bool _double;
  int top_number;
  int bottom_number;

public:
  Bone(int _top_number, int _bottom_number);
  bool isDouble();
  int getTopNumber();
  int getBottonNumber();
  void printBone(bool with_points = false);
  int getPointValue();
};

#endif