#include <math.h>

template<class T>
T Add(T a, T b){
    return a+b;
}
template<class T>
float Multi(T a,T b){
    return float(a*b);
}

template<typename T,typename U>
class Num{
public:
    T value;
    auto hello(T a,U b)->decltype(a+b);
};

template<typename T,typename U>
auto Num<T,U>::hello(T a,U b)->decltype(a+b){
    return a+b;
}
// test user.email
// float Num<T,U>::hello(T a,U b){
//     return a+b;
// }
