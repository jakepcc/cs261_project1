#include "player_class.h"
#include <iostream>
using namespace std;

Player::Player(string _name, int _max_hand_size)
{
  name = _name;
  max_hand_size = _max_hand_size;
};

bool Player::draw(ChickenYard &deck)
{
  if (hand.size() < max_hand_size)
  {
    hand.push_back(deck.draw());
    return true;
  }
  else
  {
    return false;
  }
};

void Player::drawOpeningHand(ChickenYard &deck)
{
  bool max_reached = false;
  while (!max_reached)
  {
    max_reached = !draw(deck);
  }
}

void Player::printHand()
{
  for (Bone b : hand)
  {
    cout << b.getTopNumber() << "/" << b.getBottonNumber() << " ";
  }
  cout << endl;
};
void Player::printPoints()
{
  cout << "Current point total: " << getCurrentPoints() << endl;
};
int Player::getCurrentPoints()
{
  int points = 0;
  for (Bone b : hand)
  {
    points += b.getPointValue();
  }
  return points;
};
void Player::playBone(){

};
// Bone Player::getLargestDouble(){

// };
void Player::setMaxHandSize(int _size)
{
  max_hand_size = _size;
};
void Player::printPlayerInfo()
{
  cout << "Name: " << name << endl
       << "Hand:";
  printHand();
  printPoints();
}