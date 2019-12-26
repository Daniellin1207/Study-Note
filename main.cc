#include <iostream>
using namespace std;
#include <tuple>
#include "GameInit.h"



int main(){
  Game game;
  game.GameInit();
  int a=game.TargetNum();
  cout<<game.RoomNum()<<endl;
  cout<<a<<endl;






  return 0;
}