#ifndef BONE
#define BONE

class Bone
{
  bool _double;
  int top_number;
  int bottom_number;

private:
  Bone();

public:
  Bone(int _top_number, int _bottom_number);
  bool isDouble();
  int getTopNumber();
  int getBottonNumber();
};

#endif