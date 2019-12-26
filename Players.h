#include <iostream>
#include <string>
class Player{
public:
    Player(){};
    ~Player(){};
    int Id(){return _id;};
    int InputNum(){ // 判断是否是数字 如果是数字则进行大小判断。
        while(std::cin>>_tmp_input)
        {
            if(_IsNum(_tmp_input)) return _TransNum(_tmp_input);
            std::cout<<"please input num without logo:\n";
        };
    };
    int NowInputNum(){return _now_input_num;};

private:
    std::string _tmp_input;
    int _now_input_num=0;
    int _id;
    bool _IsNum(std::string input){ // 若每个字符都是数字 则将其转化为一个数字型
        for (int i = 0; i < input.length(); i++)
        {
            if(input[i]<'0' || input[i]>'9') return false;
        }
        return true;
    }
    int _TransNum(std::string input){
        for (int i = 0; i < input.length; i++)
        {
            _now_input_num*=10;
            _now_input_num+=input[i]-'0';
        }
        return _now_input_num;
    }
};