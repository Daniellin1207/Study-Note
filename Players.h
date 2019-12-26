#include <iostream>
#include <string>
class Player{
public:
    Player(int roomId):_room_id(roomId){};
    ~Player(){};
    void PlayerInit(){
        srand((int)time(NULL));
        int range=1000;
        _id=rand()%range+10000;
        _pos_id=rand()%10;
    };
    int Id(){return _id;};
    int InputNum(){ // 判断是否是数字 如果是数字则进行大小判断。
        while(std::cin>>_tmp_input)
        {
            if(_IsNum(_tmp_input)) return _TransNum(_tmp_input);
            std::cout<<"please input num without logo:\n";
        };
    };
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