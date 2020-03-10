#include <iostream>
using namespace std;


class Shape{
    public:
        Shape() { cout << "shape contructor" << endl; };
        virtual void Draw()=0;
};  
class Line:public Shape{
    public:
        Line() { cout << "line contructor" << endl; };
        void Draw(){cout<<"Draw Lines"<<endl;};
};

class Circle: public Shape{
    public:
        Circle() { cout << "circle contructor" << endl; };
        void Draw(){cout<<"Draw Circles"<<endl;};
};

int main(){
    cout<<__cplusplus<<endl;
    cout<<"helo"<<endl;
    Shape* cir=new Circle();
    Shape* line=new Line();
    cir->Draw();
    line->Draw();
    return 0;
}


// class Base {
// public:
// 	Base() { cout << "base contructor" << endl; };
// 	virtual ~Base() { cout << "base destructor" << endl; };
// };
// class Derived :public Base {
// public:
// 	Derived() { cout << "derived contructor" << endl; };
// 	virtual ~Derived() { cout << "derived destructor" << endl; };
// };

// int main() {
// 	Base* p = new Derived;  //输出base constructor，derived constructor
// 	delete p;     //输出derived destructor,base destructor
// 	return  0;
// }