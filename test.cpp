#include <cstdio>
#include <iostream>
#include <string>
#include "bone_class.h"
#include "chicken_yard_class.h"
#include "player_class.h"

using namespace std;

int startGame(string player1, string player2);

int main()
{
  // Bone bone(2, 5);
  // cout << bone.getBottonNumber() << endl;
  // cout << bone.getTopNumber() << endl;
  // cout << bone.isDouble() << endl;

  // ChickenYard yard;
  // yard.printDeck();
  // cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
  // cout << "Suffling deck......" << endl;
  // yard.shuffle();
  // cout << "New deck:" << endl;
  // yard.printDeck();
  // cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
  // int times = 0;
  // while (times < 10)
  // {
  //   Bone drawBone = yard.draw();
  //   cout << "Drawing a new bone..." << endl;
  //   drawBone.printBone(true);
  //   times++;
  // }
  // cout << "The deck currently has: " << yard.getDeckSize() << " bones in it." << endl;
  startGame("Jake", "Nate");
};

int startGame(string player1, string player2)
{
  cout << "Let the Games Begin!" << endl;
  cout << "Building Deck...." << endl;
  ChickenYard deck;
  deck.shuffle();
  cout << "Bringing in Player 1" << endl;
  Player player_1(player1);
  cout << "Drawing opening hand..." << endl;
  player_1.drawOpeningHand(deck);
  player_1.printPlayerInfo();
  cout << "Bringing in Player 2" << endl;
  Player player_2(player2);
  cout << "Drawing opening hand..." << endl;
  player_2.drawOpeningHand(deck);
  player_2.printPlayerInfo();
  return 0;
}