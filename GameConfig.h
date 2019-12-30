
// add class as strong enum

#ifndef _GAMECONFIG_H
#define _GAMECONFIG_H

// #include <tuple>
#include <stdlib.h>
#include <time.h>
#include <math.h>
enum class GameStatus{
    GamePrepare,
    GameStart,
    GameGoing,
    GamePause,
    GameEnd,
    GameWholeEnd
};
enum class PlayerNums{
    Player1,
    Player2,
    Player3,
    Player4,
    Player5,
    Player6,
    Player7,
    Player8,
};

static bool GlobalNetworkConnected=false;


#endif