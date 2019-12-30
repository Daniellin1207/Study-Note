#include "GameConfig.h"
#include "Players.h"
#include <vector>
#include <math.h>
#include <tuple>
#include <vector>
#include <stdlib.h>

class Game{
public:
    Game(unsigned int players_num=2,unsigned int games_num=1):_players_num(players_num),_games_num(games_num){
        _room_id=GenerateRoomId();
        for (int i = 0; i < players_num; i++)
        {
            Player *player=new Player(_room_id);
            this->PushPlayer(player);
        }
        
    };
    // Game():_players_num(2),_state(GameStatus::GamePrepare){};
    // Game(int players_num=2):_players_num(players_num),_state(GameStatus::GamePrepare){};
    ~Game(){
        for (auto player:_players_vec)
        {
            delete player;
        }
    };
    // void BeginGame(){_state=GameStart;};
    // void EndGame(){_state=GameEnd;};


    void GameInit(int lowValue,int upValue, int roomId){
        _room_id=roomId;
        _state=GameStatus::GameStart;
        GenerateTargetNum(lowValue,upValue);

        // BeginGame();
    };
    void GameInit(int lowValue,int upValue){
        // _room_id=roomId;
        _state=GameStatus::GameStart;
        GenerateTargetNum(lowValue,upValue);
        // BeginGame();
    };

    void GameOver(){_state=GameStatus::GameEnd;};
    void ShowNowGameResult(){
        for (auto player:_players_vec)
        {
            cout<<player->PosId()<<"："<<player->WinNum()<<" ";
        }
        cout<<endl;
    };

    int GenerateTargetNum(int lowValue,int upValue){ // random generate num from lowValue ~ upValue
        std::get<0>(_target_num_ranges)=lowValue;
        std::get<1>(_target_num_ranges)=upValue;
        _target_num=UTIL::GetRandInt(LowRangeNum(),UpRangeNum());
        return _target_num;
    }


    void PushPlayer(Player* player){_players_vec.push_back(player);};

    GameStatus State(){return _state;};
    int RoomId(){return _room_id;};
    int TargetNum(){return _target_num;};
    int PlayersNum(){return _players_num;};
    int UpRangeNum(){return std::get<1>(_target_num_ranges);};
    int LowRangeNum(){return std::get<0>(_target_num_ranges);};
    std::vector<Player*>& PlayersVec(){return _players_vec;};
    
private:
    GameStatus _state;
    unsigned int _room_id;
    unsigned int _target_num;
    unsigned int _games_num;
    unsigned int _players_num;
    std::tuple<int,int> _target_num_ranges;
    std::vector<Player*> _players_vec;
    unsigned int _RoomInit(){_room_id=GenerateRoomId();};
    unsigned int GenerateRoomId(){ // generate room_id from 1000~1999
        _room_id=rand()%1000+1000;
    };
    // std::vector<int> room_num_vec;
};