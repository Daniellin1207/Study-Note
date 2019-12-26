#include "GameConfig.h"
#include <vector>
#include <math.h>
#include <tuple>
#include <stdlib.h>

class Game{
public:
    Game(){};
    ~Game(){};
    void BeginGame(){_state=GameStart;};
    void EndGame(){_state=GameEnd;};

    void SetNumRanges(int lowValue,int upValue){
        std::get<0>(_target_num_ranges)=lowValue;
        std::get<1>(_target_num_ranges)=upValue;
    }

    int GameInit(){
        BeginGame();
        srand((int)time(NULL));
        SetNumRanges(1,1000);
        int range=std::get<1>(_target_num_ranges)-std::get<0>(_target_num_ranges);
        _target_num=rand()%range + std::get<0>(_target_num_ranges);
        _room_num=rand()%1000+1000;
        return _room_num;
    };

    int State(){return _state;};
    int RoomNum(){return _room_num;};
    int TargetNum(){return _target_num;};
    int UpRangeNum(){return std::get<1>(_target_num_ranges);};
    int LowRangeNum(){return std::get<0>(_target_num_ranges);};
    
private:
    int _state;
    int _room_num;
    int _target_num;
    std::tuple<int,int> _target_num_ranges;
    // std::vector<int> room_num_vec;
};