#include <iostream>
using namespace std;

void pp(){

};

template<typename T,typename... Types>
void pp(T obj,Types... objs){
    cout<<obj<<endl;
    pp(objs...);
    // return ;
}


int main(){
    cout<<"hello"<<endl;
    pp(1,2,3,4);

    int i(5.3);
    cout<<i<<endl;

    auto L=[](int x){return x+5;};
    auto k=L(2);
    cout<<k<<endl;
    return 0;
}