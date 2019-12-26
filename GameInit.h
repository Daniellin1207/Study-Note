#include "GameConfig.h"
#include "Players.h"
#include <vector>
#include <math.h>
#include <tuple>
#include <vector>
#include <stdlib.h>

class Game{
public:
    Game():_players_num(2),_state(GamePrepare){};
    Game(int players_num=2):_players_num(players_num),_state(GamePrepare){};
    ~Game(){};
    // void BeginGame(){_state=GameStart;};
    // void EndGame(){_state=GameEnd;};


    void GameInit(int lowValue,int upValue, int roomId){
        _room_id=roomId;
        _state=GameStart;
        GenerateTargetNum(lowValue,upValue);
        // BeginGame();
    };

    int GenerateTargetNum(int lowValue,int upValue){ // random generate num from lowValue ~ upValue
        std::get<0>(_target_num_ranges)=lowValue;
        std::get<1>(_target_num_ranges)=upValue;
        srand((int)time(NULL));
        int range=UpRangeNum()-LowRangeNum();
        _target_num=rand()%range + LowRangeNum();
        return _target_num;
    }

    int GenerateRoomId(){ // generate room_id from 1000~1999
        _room_id=rand()%1000+1000;
    };
    void PushPlayer(Player player){_players_vec.push_back(player);};

    int State(){return _state;};
    int RoomId(){return _room_id;};
    int TargetNum(){return _target_num;};
    int PlayersNum(){return _players_num;};
    int UpRangeNum(){return std::get<1>(_target_num_ranges);};
    int LowRangeNum(){return std::get<0>(_target_num_ranges);};
    std::vector<Player> PlayersVec(){return _players_vec;};
    
private:
    int _state;
    int _room_id;
    int _target_num;
    int _players_num;
    std::tuple<int,int> _target_num_ranges;
    std::vector<Player> _players_vec;
    // std::vector<int> room_num_vec;
};