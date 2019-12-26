#include <iostream>
using namespace std;
#include <tuple>
#include <vector>
#include "GameInit.h"

int main(){
  Game game(2);
  int roomId=game.GenerateRoomId();
  game.GameInit(1,1000,roomId);
  for (int i = 0; i < game.PlayersNum(); i++)
  {
    Player player(roomId);
    game.PushPlayer(player);
  }
  
  while(game.State()!=GameEnd){
    while(true){
      for (auto player:game.PlayersVec())
      {
        int num = player.InputNum();
        if(num==game.TargetNum()){
          player.Win();
          std::cout<<player.PosId()<<" Wins!\n";
          break;
        }else if(num>game.TargetNum()){
          std::cout<<"input number is bigger than target number!\n";
        }else{
          std::cout<<"input number is smaller than target number!\n";
        }
      }
    }
    // Record
    // Refresh Game
  }
  return 0;
}