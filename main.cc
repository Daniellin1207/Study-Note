#include <iostream>
using namespace std;
#include <tuple>
#include <vector>
#include "GameDesign/GameInit.h"
#include "GameDesign/GameConfig.h"

int main(){
  unsigned int player_num=1, games_num=1;
  srand((int)time(NULL));
  while (true)
  {
    printf("玩家人数，局数分别为（用空格分开）\n：");
    scanf("%d %d",&player_num,&games_num);
    Game game(player_num,games_num);
    int low=0,high=1000;
    printf("输入游戏目标数值范围,以空格隔开：\n");
    scanf("%d %d\n",&low,&high);
    game.GameInit(low,high);
    int playerNow=0;
    for (;games_num>=0;games_num--)
    {
      while(game.State()!=GameStatus::GameEnd){
        Player* player=game.PlayersVec()[(playerNow)%player_num];
        player->InputNum();
        int num=player->NowInputNum();
        if(num==game.TargetNum()){
          player->Win();
          game.GameOver();
          std::cout<<player->PosId()<<" Wins!\n";
          break;
        }else if(num>game.TargetNum()){
          std::cout<<"input number is bigger than target number!\n";
        }else{
          std::cout<<"input number is smaller than target number!\n";
        }
        playerNow++;
      }
      //refresh record
      game.ShowNowGameResult();
      //refresh game
      game.GameInit(low,high);
    }
    game.ShowNowGameResult();
    // if over then break;
    break;
  }
  
  return 0;
}