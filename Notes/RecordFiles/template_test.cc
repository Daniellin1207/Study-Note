#include <iostream>
#include <complex>
using namespace std;

// void pp(){

// };

// template<typename T,typename... Types>
// void pp(T obj,Types... objs){
//     cout<<obj<<endl;
//     pp(objs...);
//     // return ;
// }


// int main(){
//     cout<<"hello"<<endl;
//     pp(1,2,3,4);

//     int i(5.3);
//     cout<<i<<endl;

//     auto L=[](int x){return x+5;};
//     auto k=L(2);
//     cout<<k<<endl;
//     return 0;
// }

// template<typename T>
// class Stud{
//     public:
//         T a;
//         void Draw(){cout<<"type"<<endl;};

// };
// template<> 
// class Stud<int>{
//     public:
//         int a;
//         int b;
//         void Draw(){cout<<"int"<<endl;};
// };

// int main(){
//     Stud<char>().Draw();
//     Stud<int>().Draw();
//     void* p1=malloc(512);
//     free(p1);

//     void* p2=new int(5);
//     delete p2;

//     void* p3=::operator new(512);
//     ::operator delete(p3);

//     int* p4=allocator<int>().allocate(3,(int*)0);
//     allocator<int>().deallocate(p4,3);

//     int* p5=allocator<int>().allocate(5);
//     allocator<int>().deallocate(p5,5);

//     int a[5]={2,3,4,5,6};
//     cout<<a[4]<<endl;
//     // auto i;
//     return 1;
// }

class Foo{
    public:
        long _data;
        int _id;
        string _str;
    public:
        Foo():_id(0){cout<<"default ctor.this"<<this<<" id="<<_id<<endl ;};
        Foo(int i):_id(i){cout<<"ctor.this="<<this<<" id="<<_id<<endl;};

        virtual ~Foo(){cout<<"dtor.this="<<this<<" id="<<_id<<endl;};

        static void* operator new(size_t size);
        static void operator delete(void* pdead,size_t size);
        static void* operator new[](size_t size);
        static void operator delete[](void* pdead,size_t size);
};

void* Foo::operator new(size_t size){
    Foo* p=(Foo*)malloc(size);
    cout<<"new 1"<<endl;
    return p;
}
void Foo::operator delete(void* pdead,size_t size){
    cout<<"delete 1"<<endl;
    free(pdead);
}
void* Foo::operator new[](size_t size){
    Foo* p=(Foo*)malloc(size);
    cout<<"new 2"<<endl;
    return p;
}
void Foo::operator delete[](void* pdead,size_t size){
    cout<<"delete 2"<<endl;
    free(pdead);
}

int main(){
    Foo* p=new Foo(7);
    ::delete p;
    Foo* pArray=new Foo[5];
    ::delete[] pArray;
    return 0;
}