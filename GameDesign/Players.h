#include <iostream>
#include <string>
#include "../UtilsDesign/UtilMath.cc"
class Player{
public:
    Player(unsigned int roomId):_room_id(roomId){PlayerInit();};
    Player(unsigned int roomId,unsigned int posId):_room_id(roomId),_pos_id(posId){PlayerInit();};
    ~Player(){};
    void PlayerInit(){
        _id=UTIL::GetRandInt(1,1000)+10000;
        // _pos_id=UTIL::GetRandInt(1,10);;
    };
    int Id(){return _id;};
    int InputNum(){ // 判断是否是数字 如果是数字则进行大小判断。
        ClearInputNum();
        while(std::cin>>_tmp_input)
        {
            if(_IsNum(_tmp_input)) return _TransNum(_tmp_input);
            std::cout<<"please input num without logo:\n";
        };
    };
    void ClearInputNum(){_tmp_input="";_now_input_num=0;};
    int NowInputNum(){return _now_input_num;};
    int WinNum(){return _win_num;};
    int PosId(){return _pos_id;};
    void Win(){_win_num++;};
    void Login(){}

private:
    std::string _tmp_input;
    int _now_input_num=0;
    int _id;
    int _room_id;
    int _pos_id;
    int _win_num=0;
    bool _IsNum(std::string input){ // 若每个字符都是数字 则将其转化为一个数字型
        for (int i = 0; i < input.length(); i++)
        {
            if(input[i]<'0' || input[i]>'9') return false;
        }
        return true;
    }
    int _TransNum(std::string input){
        for (int i = 0; i < input.length(); i++)
        {
            _now_input_num*=10;
            _now_input_num+=input[i]-'0';
        }
        return _now_input_num;
    }
};